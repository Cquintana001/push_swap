/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:37:51 by caquinta          #+#    #+#             */
/*   Updated: 2022/06/26 11:25:36 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

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
		x = 1;
		Number *lista_A;
		Number *lista_B;
		lista_A = NULL;
		lista_B = NULL;
		string = argv[1];
		 
		fill_nbrs(string, &lista_A);
		 
		 print_list(lista_A);
		 
	}
		 
	return 0;
}