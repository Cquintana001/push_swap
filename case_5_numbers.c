/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_5_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:48:51 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/05 15:50:48 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int position_five_numbers(int nbr, Number* list)
{ int i;
	i = 0;
	while(i<2)
	{
		if(nbr  < list->data)
			break;
		list = list->next;
		i++;
	}

	return(i);
}
void sort_five_numbers(Number* *list_A, Number* *list_B)
{
	int i;
	int j;
	
	j = 0;
	 
	put_top_element_of_list_1_in_top_of_list_2(list_A, list_B);
	put_top_element_of_list_1_in_top_of_list_2(list_A, list_B);	 
	sort_three_numbers(list_A);
	 
	 
	while(j<2)
	{
		i = position_five_numbers((*list_B)->data, *list_A);
	 
		while(i)
		{	
			first_node_becomes_the_last(list_A);
			i--;
		}	
	  put_top_element_of_list_1_in_top_of_list_2(list_B, list_A);
	 
		j++;
	}
	print_list(*list_A);
	 
}