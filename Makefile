SRCS = 	errorfunc.c \
 		init.c \
 		main.c \
		movementcounter.c \
 		movementutils.c \
 		regulate.c \
 		rules.c \
 		rules2.c \
 		rulesutils.c \
 		sort.c \
		littlesort.c \
 		utils.c
 
NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror 
RM = rm -rf
LIBC = ar -rcs
LIBFT = ./libft/libft.a

OBJS = ${SRCS:.c=.o}

$(NAME): $(OBJS) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
	@echo "$(NAME) compiled successfully!"

all: $(NAME)

clean:
	@$(RM) $(OBJS)
	@$(MAKE) -C ./libft clean
	@echo "Object files cleaned."

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) -C ./libft fclean
	@echo "$(NAME) and object files cleaned."

re: fclean all

$(LIBFT):
	@$(MAKE) -C ./libft

.PHONY: all clean fclean re