CC = gcc
NAME = libftprintf.a
NAME_LIBFT = libft.a
LIBFT_DIR = ./42course_libft/
LIBFT = $(LIBFT_DIR)/$(NAME_LIBFT)
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c			\
		   ft_printf_mode.c		\
		   ft_printf_utils.c 

OBJS = ${SRCS:.c=.o}

all : ${NAME}

$(NAME) : $(NAME_LIBFT) $(OBJS)
	ar rsv $(LIBFT) $(OBJS)
	cp $(LIBFT) .
	mv $(NAME_LIBFT) $(NAME)
	

$(NAME_LIBFT) :
	make -C $(LIBFT_DIR) all

compile : ${SRCS}
	${CC} ${CFLAGS} -c $^

clean :
	rm -f ${OBJS}
	make -C $(LIBFT_DIR) fclean

fclean : clean
	rm -f ${NAME}

.PHONY : all compile clean fclean bonus re

re : fclean all
