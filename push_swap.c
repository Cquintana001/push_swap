/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:37:51 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/09 12:12:43 by caquinta         ###   ########.fr       */
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
 
		int numbers;
		Number *lista_A;
		Number *lista_B;

		lista_A = NULL;
		lista_B = NULL;
		lista_A = get_list(argv, &lista_A); 	 		 
		fill_chunks(&lista_A, CHUNCK_NBRS );
		numbers = size_Of_List(lista_A);
		if(numbers==0)
			exit(0);
		check_numbers(numbers, &lista_A, &lista_B);
			final_set(&lista_A, &lista_B);	
	 
	}	 
	return 0;
}