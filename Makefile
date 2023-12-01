SRCS = main.c swaputils2.c swaputils3.c swaputils4.c swaputils5.c swaputils.c utils.c init.c count.c


NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
LIBC = ar -rcs
LIBFT = ./libft/libft.a

all: $(NAME)

$(NAME): $(SRCS) $(LIBFT)
	@$(CC) $(SRCS) ./libft/libft.a -o $(NAME)

clean:
	@rm -rf $(NAME)
	@rm -rf $(LIBFT)

fclean: clean
	@rm -rf $(LIBC)

re: fclean all

$(LIBFT):
	@make -C ./libft

.PHONY: all clean fclean re