SRCS = init.c main.c utils.c swaputils.c swaputils2.c swaputils3.c swaputils4.c errorfunc.c swaputils5.c


NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
LIBC = ar -rcs
LIBFT = ./libft/libft.a

all: $(NAME)

$(NAME): $(SRCS) $(LIBFT)
	@$(CC) $(CFLAGS) $(LIBFT) $(SRCS) -o $(NAME) -g

clean:
	@rm -rf $(NAME)
	@rm -rf $(LIBFT)

fclean: clean
	@rm -rf $(LIBC)

re: fclean all

$(LIBFT):
	@make -C ./libft

.PHONY: all clean fclean re