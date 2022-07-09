/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:37:51 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/09 10:08:09 by caquinta         ###   ########.fr       */
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
		 
	 	j = 0;
		lista_A = NULL;
		lista_B = NULL;
		lista_A = get_list(argv, &lista_A); 	 		 
		fill_chunks(&lista_A, CHUNCK_NBRS );
		numbers = size_Of_List(lista_A);
		if(numbers == 3)
			sort_three_numbers(&lista_A);			 	 
		if(numbers == 5)
			sort_five_numbers(&lista_A, &lista_B);		 
		while(j<numbers)
		{	 
		i =0;
		while(i<numbers && lista_A)
		{
			min = map_moves_in_B(lista_A, lista_B);;			   
			min = find_min_in_chunk(lista_A, j);
			do_moves(min, &lista_A, &lista_B);		 
			 	push_b(&lista_A, &lista_B);				 
			  if(size_Of_List(lista_B) == 2)
			 {
				if(lista_B->data<lista_B->next->data)
					swap_b(&lista_B);
			 }			 		 	 
			remap_positions(lista_A);			 
			i++; 		 	 
		}			 		 
			j++;
		}
			final_set(&lista_A, &lista_B);
			print_list(lista_A);			  
	}	 
	return 0;
}