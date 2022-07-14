# ========== VARIABLES ==========
NAME			=	push_swap

SRC			=	push_swap.c					\
					case_3_numbers.c		\
					case_5_numbers.c	\
					check_numbers.c		\
					check_sorted.c				\
					double_rotate_src.c				\
					double_rotate.c			\
					fill_chunks.c	\
					fill_numbers.c		\
					final_set.c		\
					find_min_in_chunk.c		\
					find_position.c		\
					ft_atoi_push.c		\
					node.c		\
					printlist.c			\
					push.c			\
					remap_positions.c \
					reverse_rotate.c \
					rotate.c \
					size_of_list.c \
					swap.c \
					addnumber.c \

OBJ = $(SRC:.c=.o)

INCLUDES = push_swap.h

CC = gcc 
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f
MAKE = make

 

all: $(NAME)
 

%.o : %.c 
	$(CC) $(CFLAGS) -c  $< -o $@
 

$(NAME): $(OBJ) $(INCLUDES)
	$(MAKE) -C	Libft
	mv Libft/libft.a .
	$(CC) $(CFLAGS) $(OBJ) libft.a -o $(NAME)

clean:
	$(RM) $(OBJ)  

fclean: clean
	$(RM) $(NAME) libft.a Libft/*.o


re: fclean all

.PHONY: all clean fclean re bonus