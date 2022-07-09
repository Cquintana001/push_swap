#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
typedef enum e_movetype
{
	NOMOVE = 0,
	PUSH_A,
	PUSH_B,
	ROTATE_A,
	ROTATE_B,
	RROTATE_A,
	RROTATE_B,
	SWAP_A,
	SWAP_B

}t_movetype;

typedef struct node
{
	int data;

	int chunk;

	int n_moves_A;

	int n_moves_B;

	int direction;

	t_movetype movetypeA;
	t_movetype movetypeB;
	struct node *next;

}Number;

void push(Number* *list_1, Number* *list_2);
void push_a(Number* *list_1, Number* *list_2);
void push_b(Number* *list_1, Number* *list_2);
void swap(Number* *list);
void swap_a(Number* *list);
void swap_b(Number* *list);
void rotate(Number* *list);
void rotate_a(Number* *list);
void rotate_b(Number* *list);
void rotate_both(Number* *list_1, Number* *list_2);
void reverse_rotate(Number* *list);
void reverse_rotate_a(Number* *list);
void reverse_rotate_b(Number* *list);
void reverse_rotate_both(Number* *list_1, Number* *list_2);
int size_Of_List(Number *list);
Number *createNode();
int ft_atoi(char *array);
Number *addnumber(Number *lista, int nbr);
void	fill_nbrs(char *str, Number* *lista);
void print_list(Number* list);
int find_head_position_in_list(Number* list);
int find_position_in_list(Number* node, Number *list);
void fill_chunks(Number* *list, int chunks);
int movements(Number* node, Number* list);
Number* find_min_in_chunk(Number* list, int chunknbr);
void remap_positions(Number* list);
Number* map_moves_in_B(Number *list_1, Number* list_2);
int check_if_list_is_sorted(Number* lista_A);
void sort_three_numbers(Number* *list_A);
void sort_five_numbers(Number* *list_A, Number* *list_B);
void final_set(Number* *list_1, Number* *list_2);
void check_min_moves(Number* min, Number* *list_1, Number* *list_2);
Number* get_list(char **array, Number* *list);
void do_moves(Number* min,Number* *list_1, Number* *list_2);
void check_numbers(int numbers, Number* *list_1, Number* *list_2);
#endif