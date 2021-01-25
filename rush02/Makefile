
NAME = rush-02

SRCS = main.c additional.c ft_rush02.c

OBJS = ${.c=.o}

FLAGS = -Wall -Werror -Wextra


${NAME}: ${OBJS}
	cc -o ${NAME} ${SRCS} -Iincludes ${FLAGS}

all:	${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean
