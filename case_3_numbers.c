/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_3_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 10:27:58 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/15 07:49:30 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	sort_three_numbers(t_number **list_a)
{
	int	first;
	int	second;
	int	third;

	first = (*list_a)->data;
	second = (*list_a)->next->data;
	third = (*list_a)->next->next->data;
	if (first < second && second < third)
		return ;
	if (first > second && second > third)
	{
		swap_a(list_a);
		reverse_rotate_a(list_a);
	}
	else if (first > second && second < third && third > first)
		swap_a(list_a);
	else if (first > second && second < third && third < first)
		rotate_a(list_a);
	else if (first < second && second > third && third > first)
	{
		swap_a(list_a);
		rotate_a(list_a);
	}
	else
		reverse_rotate_a(list_a);
}
