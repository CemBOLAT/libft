NAME = libft.a

FLAG = -Wall -Wextra -Werror

SRC = $(shell find . ! -name "ft_lst*.c" -name "ft_*.c")

BONUS = $(shell find . -name "ft_lst*.c")

all: $(NAME)

$(NAME):
	@gcc $(FLAG) -c $(SRC)
	@ar rc $(NAME) *.o

bonus:
	@gcc $(FLAG) -c $(BONUS)
	@ar rc $(NAME) *.o

clean:
	@rm -rf  *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
