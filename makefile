# ========== VARIABLES ==========
NAME			=	push_swap.a
DIR_OBJS 		=	objs/
CC				=	clang
CFLAGS			=	-Wall -Werror -Wextra -g

SRCS			=	push_swap.c					\
					srcs/case_3_numbers.c		\
					srcs/case_5_numbers.c	\
					srcs/check_numbers.c		\
					srcs/check_sorted.c				\
					srcs/double_rotate_src.c				\
					srcs/double_rotate.c			\
					srcs/fill_chunks.c	\
					srcs/fill_numbers.c		\
					srcs/final_set.c		\
					srcs/find_min_in_chunk.c		\
					srcs/find_position.c		\
					srcs/ft_atoi.c		\
					srcs/node.c		\
					srcs/printlist.c			\
					srcs/push_swap.c			\
					srcs/push.c			\
					srcs/remap_positions.c \
					srcs/reverse_rotate \
					srcs/rotate.c \
					srcs/size_of_list.c \
					srcss/swap.c \

OBJS			=	$(SRCS:.c=.o)
OBJS_PREFIXED	=	$(addprefix $(DIR_OBJS), $(OBJS))

 

# ========== RULES ==========

$(DIR_OBJS)%.o : %.c push_swap.h
	@mkdir -p $(DIR_OBJS)/srcs/libft
	@echo "Compiling with $(CC) $(CFLAGS):\t $<"
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS_PREFIXED)
	@ar csr $(NAME) $(OBJS_PREFIXED)
	@echo "${GREEN}Mandatory part compiled!${RESET}"

# ========== FUNCTIONS ==========

all: $(NAME)

clean:
	@rm -rf $(OBJS) $(DIR_OBJS)
	@echo "${GREEN}Cleaned!${RESET}"

fclean: clean
	@rm -f $(NAME)

re: fclean all

out: all
	gcc -g $(CFLAGS) push_swap.a -o push_swap

.PHONY: all clean fclean re