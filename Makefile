NAME		= ft_printf

CC		    = gcc

CC_FLAGS     = -Wall -Wextra -Werror

SRCS		= ft_printf.c

SRCS_O		= $(SRCS:.c=.o)

I_LIBFT 	= -Ilibft

LIBFT 		= -Llibft $(I_LIBFT) -lft

all:	$(NAME)


$(NAME): $(SRCS_O)
			@make -C libft
			@$(CC) $(CC_FLAGS) -o $(NAME) $^ -I . $(LIBFT)
			@echo "$(NAME) as been successfuly done :)"

%.o: $(SRC_DIR)%.c
	@$(CC) $(CC_FLAGS) -I$ . -o $@ -c $< $(I_LIBFT)

re: fclean all


clean:
		@make clean -C libft
		@rm -f $(SRCS_O)

fclean: clean
		@make fclean -C libft