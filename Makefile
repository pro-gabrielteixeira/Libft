NAME = Libft.a
CFLAGS = -Wall -Wextra -Werror
HEADER_FILE = .libft.h
CC = gcc
OBJ = ft_isalnum.o  ft_isalpha.o  ft_isascii.o  ft_isdigit.o  ft_strlen.o
SRC = 

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -I${HEADER_FILE}-o $(NAME) $(OBJ)
	ar rc ${NAME} ${OBJ}
	ranlib ${NAME}

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
