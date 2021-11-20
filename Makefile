NAME = Libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc
OBJ = ft_isalnum.o  ft_isalpha.o  ft_isascii.o  ft_isdigit.o  ft_strlen.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

.PHONY: clean fclean re

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
