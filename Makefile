CC = gcc
NAME = libftprintf.a
NAME_LIBFT = libft.a
LIBFT_DIR = ./libft/
CFLAGS = -Wall -Wextra -Werror
SRCS_MAN = ft_printf.c			\
		   ft_printf_mode.c		\
		   ft_printf_utils.c 

OBJS_MAN = ${SRCS_MAN:.c=.o}
OBJS_BONUS = ${SRCS_BONUS:.c=.o}

all : ${NAME}

ifdef IS_BONUS
	SRCS_FILES = ${SRCS_BONUS}
	OBJS_FILES = ${OBJS_BONUS}
else
	SRCS_FILES = ${SRCS_MAN}
	OBJS_FILES = ${OBJS_MAN}
endif

$(NAME) :
	cd ${LIBFT_DIR}; make; cp ${NAME_LIBFT} ../; \
		cd ../; mv ${NAME_LIBFT} ${NAME}; make compile; ar rsv ${NAME} ${OBJS_FILES}

compile : ${SRCS_MAN} ${SRCS_BONUS}
	${CC} ${CFLAGS} -c $^

clean :
	rm -f ${OBJS_MAN} ${OBJS_BONUS}; cd libft; make clean

fclean : clean
	rm -f ${NAME}; cd libft; make fclean

bonus : 
	IS_BONUS=1 make 

.PHONY : all compile clean fclean bonus re

re : fclean all
