NAME = libft.a
HEADER = libft.h
SRC = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strlen.c ft_atoi.c
OBJ = ${SRC:.c=.o}

CC = gcc
FLAG = -Wextra -Wall -Werror

all: ${NAME}

${NAME}: ${SRC}
	${CC} ${FLAG} -I${HEADER} -c ${SRC}
	ar rc ${NAME} ${OBJ}

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
