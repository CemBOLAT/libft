NAME		= libft.a

SRCS		= ft_*.c

BNS_SRCS	= ft_lst*.c\

OBJS		= $(SRCS:%.c=%.o)

BNS_OBJS	= $(BNS_SRCS:%.c=%.o)

FLAGS		= -Wall -Werror -Wextra -std=c99

$(NAME):
	@gcc $(FLAGS) -c $(SRCS) -I ./
	@ar rcs $(NAME) $(OBJS)

all: $(NAME)

bonus: $(NAME)
	@gcc $(FLAGS) -c $(BNS_SRCS) -I ./
	@ar rcs $(NAME) $(BNS_OBJS)

clean:
	@rm -f $(OBJS) $(BNS_OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY = clean fclean re all bonus