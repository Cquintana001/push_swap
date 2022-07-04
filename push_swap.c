/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:37:51 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/04 14:39:57 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

#define CHUNCK_NBRS 1

int main(int argc, char **argv)
{
	if(argc!=1)
	{		 
		int i;
		int j;
		int numbers;
		Number* min;
		Number *lista_A;
		Number *lista_B;
		Number* aux;
		 
	 	j = 1;
		lista_A = NULL;
		lista_B = NULL;
		
		while(argv[j])
		{
			fill_nbrs(argv[j], &lista_A);
			j++;
		}
		if(lista_A==NULL) 
			return(0);
		check_if_list_is_sorted(lista_A);		 		 
		fill_chunks(&lista_A, CHUNCK_NBRS );
	 
		j=0;
		numbers = size_Of_List(lista_A);
		while(j<numbers)
		{
		aux = lista_A;		 
		i =0;
		 while(i<numbers && lista_A)
		{
			min = lista_A;
			  while(min)
				{
					min->n_moves_B = find_position_in_list(min, lista_B);					 
					min = min->next;
				} 
			min = find_min_in_chunk(lista_A, j);
			if(min->movetypeA == ROTATE_A && min->movetypeB == ROTATE_B)
			{
					while(min->n_moves_A && min->n_moves_B )
					{
						first_node_becomes_the_last(&lista_A);
						first_node_becomes_the_last(&lista_B);
						min->n_moves_A--;
						min->n_moves_B--;
						write(1, "rr\n",3);
					}
			} 
			if(min->movetypeA == 	RROTATE_A && min->movetypeB == RROTATE_B)
			{
					while(min->n_moves_A && min->n_moves_B )
					{
						reverse_rotate(&lista_A);
						reverse_rotate(&lista_B);
						min->n_moves_A--;
						min->n_moves_B--;
						write(1, "rrr\n",4);
					}
			} 
			if(min->movetypeA == ROTATE_A) 
			{	while(min->n_moves_A )
				{
					first_node_becomes_the_last(&lista_A);					 
					min->n_moves_A--;
					write(1, "ra\n",3);					  
				}
			} 
			else if(min->movetypeA == RROTATE_A)
			{					 
				while(min->n_moves_A)
				{					 
					reverse_rotate(&lista_A);
					min->n_moves_A--;
					write(1, "rra\n",4);
				}
			}
			if(min->movetypeB == ROTATE_B) 
			{	while(min->n_moves_B )
				{
					first_node_becomes_the_last(&lista_B);					 
					min->n_moves_B--;
					write(1, "rb\n",3);					  
				}
			} 
			else if(min->movetypeB == RROTATE_B)
			{					 
				while(min->n_moves_B)
				{					 
					reverse_rotate(&lista_B);
					min->n_moves_B--;
					write(1, "rrb\n",4);
				}
			}
			 	put_top_element_of_list_1_in_top_of_list_2(&lista_A, &lista_B);
				 write(1, "pa\n",3);
			  if(size_Of_List(lista_B) == 2)
			 {
				if(lista_B->data<lista_B->next->data)
				{
					swap_first_and_second_nodes(&lista_B);
					write(1, "sa\n",3);
			 	}
			 }
			 		 	 
			remap_positions(lista_A);			 
			i++; 		 	 
		}			 		 
			j++;
		}
			int size;
			 i = find_head_position_in_list(lista_B);
			 size = size_Of_List(lista_B);
			 if(i<=(size/2))
			{				
				while(i)
				{
					first_node_becomes_the_last(&lista_B);
					write(1, "rb\n",3);
					i--;
				} 		
			}
			else if(i>(size/2))
			{
				i = size -i;
				while(i)
				{
					reverse_rotate(&lista_B);
					write(1, "rrb\n",4);
					i--;
				} 		
			}
			while(size)
			{
				put_top_element_of_list_1_in_top_of_list_2(&lista_B, &lista_A);
				write(1, "pa\n",3);
				size--;
			}
	}	 
	return 0;
}