/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:37:51 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/01 11:17:53 by caquinta         ###   ########.fr       */
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
			  
			while(min)
			{
				first_node_becomes_the_last(&lista_A);
				min--;
			}
			put_top_element_of_list_1_in_top_of_list_2(&lista_A, &lista_B);
			remap_positions(&lista_A);
			print_list(lista_B);
			i++; 
		}
		j++; 
		 }
			 
		  
	}
	 
	return 0;
}