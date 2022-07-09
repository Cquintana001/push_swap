/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 08:13:09 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/09 15:13:28 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	both_reverse_move(Number *min, Number **list_1, Number **list_2)
{
	while (min->n_moves_a && min->n_moves_b)
	{
		reverse_rotate_both(list_1, list_2);
		min->n_moves_a--;
		min->n_moves_b--;
	}
}

void	both_rotate_move(Number *min, Number **list_1, Number **list_2)
{
	while (min->n_moves_a && min->n_moves_b)
	{
		rotate_both(list_1, list_2);
		min->n_moves_a--;
		min->n_moves_b--;
	}
}

void	simple_rotate_a(Number *min, Number **list)
{
	while (min->n_moves_a)
	{
		rotate_a(list);
		min->n_moves_a--;
	}
}

void	simple_reverse_rotate_a(Number *min, Number **list)
{
	while (min->n_moves_a)
	{
		reverse_rotate_a(list);
		min->n_moves_a--;
	}
}

void	simple_rotate_b(Number *min, Number **list)
{
	while (min->n_moves_b)
	{
		rotate_b(list);
		min->n_moves_b--;
	}
}

void	simple_reverse_rotate_b(Number *min, Number **list)
{
	while (min->n_moves_b)
	{
		reverse_rotate_b(list);
		min->n_moves_b--;
	}
}

void	do_moves(Number *min, Number **list_1, Number **list_2)
{
	if (min->movetype_a == ROTATE_A && min->movetype_b == ROTATE_B)
		both_rotate_move(min, list_1, list_2);
	if (min->movetype_a == RROTATE_A && min->movetype_b == RROTATE_B)
		both_reverse_move(min, list_1, list_2);
	if (min->movetype_a == ROTATE_A)
		simple_rotate_a(min, list_1);
	if (min->movetype_a == RROTATE_A)
		simple_reverse_rotate_a(min, list_1);
	if (min->movetype_b == ROTATE_B)
		simple_rotate_b(min, list_2);
	if (min->movetype_b == RROTATE_B)
		simple_reverse_rotate_b(min, list_2);
}
