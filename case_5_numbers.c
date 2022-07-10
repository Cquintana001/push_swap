/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_5_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:48:51 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/09 18:47:49 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int position_five_numbers(int nbr, t_number* list)
{ int i;
	i = 0;
	while(list)
	{
		if(nbr  < list->data)
			break;
		list = list->next;
		i++;
	}

	return(i);
}
void sort_five_numbers(t_number* *list_A, t_number* *list_B)
{
	int i;
	int j;
	
	j = 0;
	 
	push(list_A, list_B);
	push(list_A, list_B);	 
	sort_three_numbers(list_A);
	 
	 
	while(j<2)
	{
		i = position_five_numbers((*list_B)->data, *list_A);
	 
		while(i)
		{	
			rotate(list_A);
			i--;
		}	
	 push(list_B, list_A);
	 
		j++;
	}
	print_list(*list_A);
	 
}