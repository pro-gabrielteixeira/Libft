# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gateixei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 20:02:58 by gateixei          #+#    #+#              #
#    Updated: 2022/03/02 18:00:48 by gateixei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
SRC = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strlen.c ft_atoi.c \
		ft_isprint.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_memset.c \
		ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_tolower.c ft_toupper.c ft_calloc.c ft_bzero.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_itoa.c ft_split.c ft_strmapi.c

OBJ = ${SRC:.c=.o}

CC = gcc
CFLAG = -Wextra -Wall -Werror

all: ${NAME}

${NAME}: ${SRC}
	${CC} ${CFLAG} -I${HEADER} -c ${SRC}
	ar rcs ${NAME} ${OBJ}

clean:
	rm -rf *.o

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re
