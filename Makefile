PS_NAME		=	push_swap
CC			=	clang
DIR			=	srcs/
OBJ_DIR		=	obj/
SUB_DIR		=	obj/ps_srcs obj/c_srcs

FLAG		=	-Wall		\
				-Wextra		\
				-Werror

 

RM			=	rm -f

PS_FILES	=	addnumber.c			\
				fill_chunks.c			\
				fill_numbers.c		\
				find_min_in_chunk.c		\
				find_position.c		\
				ft_atoi.c			\
				node.c			\
				printlist.c			\
				push_swap.c	\
				push.c	\
				remap_positions.c			\
				reverse_rotate.c			\
				rotate.c			\
				size_of_list.c			\
				swap_a.c

PS_SRCS		=	$(addprefix $(DIR), $(PS_FILES))
PS_OBJ		=	$(PS_SRCS:$(DIR)%.c=$(OBJ_DIR)%.o)

all			:	$(PS_NAME)	

obj/%.o		:	srcs/%.c
				@mkdir -p $(OBJ_DIR) $(SUB_DIR)
				$(CC) -g $(FLAG) $(INCLUDE) $< -o $@

 

$(PS_NAME)	:	$(PS_OBJ) 
				$(CC) -fsanitize=address -o $@ $^

 

clean		:	
				for dir in $(MODULES); do			\
					@$(MAKE) clean -C $$dir;		\
				done
				@/bin/rm -rf $(OBJ_DIR)

fclean		:	clean
				@$(MAKE) fclean -C $(LIB_DIR)
				@$(RM) $(LIB)
				@$(RM) $(PS_NAME)
				# @$(RM) $(C_NAME)

re			:	fclean all

.PHONY		:	all clean fclean re