/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_3_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 10:27:58 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/10 11:03:51 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	sort_three_numbers(t_number **list_A)
{
	int	first;
	int	second;
	int	third;

	first = (*list_A)->data;
	second = (*list_A)->next->data;
	third = (*list_A)->next->next->data;
	if (first > second && second > third)
	{
		swap_a(list_A);
		reverse_rotate_a(list_A);
	}
	else if (first > second && second < third && third > first)
		swap_a(list_A);
	else if (first > second && second < third && third < first)
		rotate_a(list_A);
	else if (first < second && second > third && third > first)
	{
		swap_a(list_A);
		rotate_a(list_A);
	}
	else
		reverse_rotate_a(list_A);
}
