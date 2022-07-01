/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:37:51 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/01 13:51:33 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if(argc!=1)
	{
		 
		 
		char *string;
		int min;
		int i;
		int j;
		Number *lista_A;
		Number *lista_B;
		Number* aux;
		int count = 0;
	 	j = 0;
		lista_A = NULL;
		lista_B = NULL;
		string = argv[1];
		fill_nbrs(string, &lista_A);		 		 
		fill_chunks(&lista_A, 5);
		//print_list(lista_A);
		 
		 while(j<5)
		{
		aux = lista_A;		 
		i =0;
		 while(i<20)
		{
			min = find_min_in_chunk(lista_A, j);
			 count += min;
			if(min<(size_Of_List(lista_A)/2)) 
			{	while(min)
				{
					first_node_becomes_the_last(&lista_A);
					count++;
					min--;
				}
			}
			else if(min>(size_Of_List(lista_A)/2))
			{	
				min =  size_Of_List(lista_A) - min;
				while(min)
				{
					 
					reverse_rotate(&lista_A);
					count++;
					min--;
				}
			}
			if(!lista_B)
			{	put_top_element_of_list_1_in_top_of_list_2(&lista_A, &lista_B);
				count++;
			}
			else
			{	min = find_position_in_list(lista_A->data, lista_B);
				count += min;
				while(min)
				{
					first_node_becomes_the_last(&lista_B);
					count++;
					min--;
				}
			 	put_top_element_of_list_1_in_top_of_list_2(&lista_A, &lista_B);
				 count++;
			}
			remap_positions(&lista_A);
			i++; 
		}
			min =  find_head_position_in_list(lista_B);
			count += min;
			while(min)
				{
					first_node_becomes_the_last(&lista_B);
					count++;
					min--;
				}
		 
			j++;
		}
		 	print_list(lista_B);		  
	}
	 
	return 0;
}