NAME = libft.a
HEADER = libft.h
SRC = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strlen.c ft_atoi.c ft_bzero.c ft_calloc.c \
		ft_isprint.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memmove.c
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
