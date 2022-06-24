#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;

	struct node *next;
}Number;

Number *createNode() {
  return ((Number *) malloc(sizeof(Number)));
}
 
int size_Of_List(Number *list)
{
	int x;

	x = 0;
	while(list->next!=NULL)
	{
		list = list->next;
		x++;
	}
	return (x);
}

void swap_first_and_last_nodes(Number* *list)
{
	Number *aux, *temp;	 
	int lenght;

	aux = *list;
	lenght = size_Of_List(aux);
	while(lenght>2)
	{
		aux = aux->next;
		lenght--;
	}
	temp = *list;
	*list = aux->next;
	(*list)->next = temp->next;
	aux->next = temp;
	temp->next = NULL;
	 
}
void swap_first_and_second_nodes(Number* *list)
{
	Number *aux;	 

	aux = *list;
	*list = aux->next;
	aux->next = (*list)->next;
	(*list)->next = aux; 	 
}

void first_node_becomes_the_last(Number* *list)
{
	Number *aux;
	aux = *list;	 
	while(aux->next != NULL)
		aux = aux->next;
	aux->next = *list;
	*list = (*list)->next;
	aux->next->next =NULL;
}

void last_node_becomes_the_first(Number* *list)
{
	Number *aux;
	aux = *list;	 
	while(aux->next->next != NULL)
		aux = aux->next;	 
	aux->next->next =*list;
	*list = aux->next;
	aux->next =NULL;
}

int main()
{
	Number *firstnode, *aux;
	int x;

	x = 5;
	firstnode = createNode();
	firstnode->next =NULL;
	firstnode->data = x;
	aux = firstnode;
	 
	 while(x<15)
	 {
	 
	aux->next = createNode();
	aux = aux->next;
	x++;
	aux->data = x;
	 
	}
	aux->next = NULL;
	aux = firstnode;
	 

	printf("=============================\n");
	last_node_becomes_the_first(&aux);
	while(aux !=NULL)
	{
		printf("%d\n",aux->data );
		aux = aux->next;
	}

}