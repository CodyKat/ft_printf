CC = gcc
NAME = libftprintf.a
NAME_LIBFT = libft.a
LIBFT_DIR = ./42course_libft/
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c			\
		   ft_printf_mode.c		\
		   ft_printf_utils.c 

OBJS = ${SRCS:.c=.o}

all : ${NAME}

$(NAME) : $(NAME_LIBFT) $(OBJS)
	ar rsv $(NAME_LIBFT) $(OBJS)
	

$(NAME_LIBFT) :
	make -C $(LIBFT_DIR) all

compile : ${SRCS}
	${CC} ${CFLAGS} -c $^

clean :
	rm -f ${OBJS_MAN} ${OBJS_BONUS}; cd libft; make clean

fclean : clean
	rm -f ${NAME}; cd libft; make fclean

bonus : 
	IS_BONUS=1 make 

.PHONY : all compile clean fclean bonus re

re : fclean all
