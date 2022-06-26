#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

typedef struct node
{
	int data;

	struct node *next;
}Number;

void put_top_element_of_list_1_in_top_of_list_2(Number* *list_1, Number* *list_2);
void swap_first_and_second_nodes(Number* *list);
void first_node_becomes_the_last(Number* *list);
void last_node_becomes_the_first(Number* *list);
int size_Of_List(Number *list);
Number *createNode();
int ft_atoi(char *array);
Number *addnumber(Number *lista, int nbr);
void	fill_nbrs(char *str, Number* *lista);
void print_list(Number* list);


#endif