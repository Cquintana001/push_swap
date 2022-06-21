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

	Number *aux;

	if(*list == NULL)
		return;	
	aux = *list;
	while(aux->next != NULL)
		aux =  aux->next;
	
	free(aux);
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
	Remove_Node_From_Begin_Of_List(&firstnode);
	aux = firstnode;
	x = 0;
	printf("=========================\n");
	while(x<10)
	{	
		printf("%d\n", aux->data);
		aux = aux->next;
		x++;
	}
	Remove_Node_From_End_Of_List(&firstnode);
	aux = firstnode;
	x = 0;
	printf("=========================\n");
	while(x<10)
	{	
		printf("%d\n", aux->data);
		aux = aux->next;
		x++;
	}
	free(aux);
	return 0;

}