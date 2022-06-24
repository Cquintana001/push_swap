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


Number *addNodeToEndOfList(Number *list, int data)
{
	Number *newnumber, *aux;
	newnumber = createNode();
	newnumber->data = data;
	 
	newnumber->next = NULL;
	if(list == NULL){
		list = newnumber;
	}
	else{

		aux = list;
		while(aux->next!=NULL){
			aux = aux->next;
		}
		aux->next = newnumber;
	}
	return list; 

}

Number *Add_Node_To_Begin_Of_List(Number *list, int data)
{
	Number *newnumber;
	newnumber = createNode();
	newnumber->data = data;

	newnumber->next = list;
	list = newnumber;
	return list;
}

void Remove_Node_From_Begin_Of_List(Number* *list){

	Number *aux;

	if(*list == NULL)
		return;	
	aux = *list;
	*list =  aux->next;
	free(aux);
}

void Remove_Node_From_End_Of_List(Number* *list){

	Number *aux, *aux2;
	int length;
	if(*list == NULL)
		return;	
	aux = *list;
	
	length = size_Of_List(aux);
	printf("longitud %d\n", length);
	aux = *list;
		while(length>2)
		{
			aux = aux->next;
			length--;
		}
	aux2 = aux->next;
	aux->next = NULL;
	free(aux2);
	 
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
	 
	aux->data = x;
	 
	aux->next = createNode();
	aux = aux->next;
	x++;
	}
	aux->next = NULL;
	aux = firstnode;
	swap_first_and_second_nodes(&firstnode);
	while(firstnode->next !=NULL)
	{
		printf("%d\n",firstnode->data );
		firstnode = firstnode->next;
	}

}