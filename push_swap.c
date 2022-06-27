/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:37:51 by caquinta          #+#    #+#             */
/*   Updated: 2022/06/27 15:03:53 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if(argc!=1)
	{
		int x;
		int i;
		int count;
		char *string;
		count = 0;
		i = 0;
		x = 0;
		Number *lista_A;
		Number *lista_B;
		lista_A = NULL;
		lista_B = NULL;
		string = argv[1];
		 
		fill_nbrs(string, &lista_A);		 
		put_top_element_of_list_1_in_top_of_list_2(&lista_A, &lista_B);
		put_top_element_of_list_1_in_top_of_list_2(&lista_A, &lista_B);
		if(lista_B->data<lista_B->next->data)
			swap_first_and_second_nodes(&lista_B); 	
		i = find_position_in_list(lista_A->data, lista_B);
		printf("la posicion es : %d\n", i);
		while(i>0)
			first_node_becomes_the_last(&lista_B);
		put_top_element_of_list_1_in_top_of_list_2(&lista_A, &lista_B);
			
	 
		
		 
		 
	}
		 
	return 0;
}