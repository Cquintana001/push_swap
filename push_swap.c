/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:37:51 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/02 13:40:12 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

#define CHUNCK_NBRS 5

int main(int argc, char **argv)
{
	if(argc!=1)
	{
		 
		 
		char *string;
		int i;
		int j;
		Number* min;
		Number *lista_A;
		Number *lista_B;
		Number* aux;
		int count = 0;
	 	j = 0;
		lista_A = NULL;
		lista_B = NULL;
		string = argv[1];
		fill_nbrs(string, &lista_A);		 		 
		fill_chunks(&lista_A, CHUNCK_NBRS );
		//print_list(lista_A);
		 
		 while(j<CHUNCK_NBRS)
		{
		aux = lista_A;		 
		i =0;
		 while(i<20)
		{
			min = find_min_in_chunk(lista_A, j);
			//printf("min: %d\n", min->data);
			 
			if(min->movetypeA == ROTATE_A && min->data!= 0) 
			{	while(min->n_moves_A)
				{
					first_node_becomes_the_last(&lista_A);
					count++;
					min->n_moves_A--;
				}
			}
			else if(min->movetypeA == RROTATE_A)
			{	
				 
				while(min->n_moves_A)
				{
					 
					reverse_rotate(&lista_A);
					count++;
					min->n_moves_A--;
				}
			}
			if(!lista_B)
			{	put_top_element_of_list_1_in_top_of_list_2(&lista_A, &lista_B);
				count++;
			}
			else
			{	
				min= find_position_in_list(lista_A, lista_B);
				 
				while(min->n_moves_B)
				{
					first_node_becomes_the_last(&lista_B);
					count++;
					min->n_moves_B--;
				}
			 	put_top_element_of_list_1_in_top_of_list_2(&lista_A, &lista_B);
				 count++;
			}
			remap_positions(lista_A);
			 
			i++; 
		 	//printf("movimientos: %d para el numero: %d\n", count, lista_B->data);
			  
		}
			/* min =  find_head_position_in_list(lista_B);
			count += min;
			while(min)
				{
					first_node_becomes_the_last(&lista_B);
					count++;
					min--;
				} */
		 
			j++;
			print_list(lista_B);	  
		}
	}
	 
	return 0;
}