SRCS = 	./Mandatory/errorfunc.c \
 		./Mandatory/init.c \
 		./Mandatory/main.c \
		./Mandatory/movementcounter.c \
 		./Mandatory/movementutils.c \
 		./Mandatory/regulate.c \
 		./Mandatory/rules.c \
 		./Mandatory/rules2.c \
 		./Mandatory/rulesutils.c \
 		./Mandatory/sort.c \
		./Mandatory/littlesort.c \
 		./Mandatory/utils.c \

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror 
RM = rm -rf
LIBC = ar -rcs
LIBFT = ./libft/libft.a

OBJS = ${SRCS:.c=.o}

$(NAME): $(SRCS) $(LIBFT) $(OBSJ)
	@$(CC) $(CFLAGS) $(SRCS) $(LIBFT) -o $(NAME)

all: $(NAME)

clean:
	@rm -rf $(NAME)
	@rm -rf $(OBJS)
	@rm -rf $(LIBFT)

fclean: clean
	@rm -rf $(LIBC)

re: fclean all

$(LIBFT):
	@make -C ./libft

.PHONY: all clean fclean re