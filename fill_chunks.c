/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_chunks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 09:15:42 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/02 12:48:40 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

int movements(Number* node, Number* list)
{
	int movements = 0;
	 int size = size_Of_List(list);
	while(list->next != NULL)
	{
		if(list->data == node->data)
				break;
		else
			list = list->next;
			movements++;
	}
	if(list->data == node->data)
	{	
		if(movements>size/2)
		{
			movements = size -movements;
			node->movetypeA = RROTATE_A;
		}
		else
			node->movetypeA = ROTATE_A;	 
		node->n_moves_A = movements;
		return movements;
	}		 		 
	return (-1);
}
void sorted_list(Number* *list, int i)
{
	Number* min;
	
	  
	Number* aux = *list;
	min = *list;
	while (min)
	{
		if (min->chunk == -1)
			break;
		min = min->next;
	}
	 
	while(aux->next != NULL)
	{
		if(aux->chunk == -1 && min->data > aux->data)
			min = aux;
		aux = aux->next;
	}
	if(aux->chunk == -1 && min->data > aux->data)
			min = aux;
	min->chunk = i;
	 movements(min , *list);
	//printf("chunk: %d\nvalor: %d\nposition: %d\n", i, min->data, min->position);
	 
}

void fill_chunks(Number* *list, int chunks)
{	
	int i;
	int numbers = (size_Of_List(*list)/chunks);
	int aux;
	
	i = 0;
	while(i<chunks)
	{	 
		aux = numbers;
		while(aux>0)
		{
			sorted_list(list, i);
			aux--;		
		}
		i++;
	}	
}

/* int main(int argc, char **argv)
{
	if(argc!=1)
	{
		 
		char *string;		 
		Number *lista_A;		 
		lista_A = NULL;		 
		string = argv[1];
		 
		fill_nbrs(string, &lista_A);
		 
		fill_chunks(&lista_A, 5);
		print_list(lista_A);
		 
		find_position_in_list(lista_A->data, lista_B);
	}
	return (0);
}	 */