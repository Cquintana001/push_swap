/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_3_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 10:27:58 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/05 13:59:39 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_three_numbers(Number* *list_A)
{
	int first;
	int second;
	int third;
	
	first = (*list_A)->data;
	second = (*list_A)->next->data;
	third = (*list_A)->next->next->data;
	if(first<second && second<third )
		return;
	if(first>second && second>third)
	{
	 	swap_first_and_second_nodes(list_A);
		 write(1, "sa\n", 3);
		reverse_rotate(list_A);
		 write(1, "rra\n", 4);
	}
	else if(first>second && second <third && third>first)
	{	swap_first_and_second_nodes(list_A);
		write(1, "sa\n", 3);
	}
	else if(first>second && second <third && third<first)
	{
		rotate(list_A);
		write(1, "ra\n", 3);
	}
	else if(first<second && second>third && third > first)
	{
		swap_first_and_second_nodes(list_A);
		rotate(list_A);
		write(1, "sa\n", 3);
		write(1, "ra\n", 3);
	}
	else
	{
		reverse_rotate(list_A);
		write(1, "rra\n", 4);
	}	
}