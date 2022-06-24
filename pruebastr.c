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

	x = 1;
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
	
	Number *aux, *swap;
	int length;
	if(*list == NULL)
		return; 	
	aux = *list;
	length = size_Of_List(aux);
	 
	aux = *list;
		while(length>1)
		{
			aux = aux->next;
			length--;
		}
	swap = *list;
	*list = aux->next;
	aux->next->next  = swap->next;
	aux->next = swap;
	swap->next= NULL;;	 

		
	 

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
	printf("%d\n", aux->data);
	aux->next = createNode();
	aux = aux->next;
	aux->next = NULL;
	x++;
	}
	 
	 
	swap_first_and_last_nodes(&firstnode);
	aux = firstnode;
	x = 0;
	printf("=========================\n");
	while(aux->next != NULL)
	{	
		printf("%d\n", aux->data);
		aux = aux->next;
		x++;
	}
	printf("%d\n", aux->data);
	free(aux);
	return 0;

}