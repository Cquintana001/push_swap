#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;

	struct node *next;
}Number;

Number *createNode(void) {
  return (Number *) malloc(sizeof(Number));
}
 
Number *listNumbers(Number *list)
{
	list = NULL;

	return list;

}


Number *addNodeToEndOfList(Number *list, int data)
{
	Number *newnumber, *aux;
	newnumber = createnode();
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
	newnumber = createnode();
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