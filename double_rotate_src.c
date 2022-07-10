/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_rotate_src.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:15:16 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/10 14:16:09 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	both_reverse_move(t_number *min, t_number **list_1, t_number **list_2)
{
	while (min->n_moves_a && min->n_moves_b)
	{
		reverse_rotate_both(list_1, list_2);
		min->n_moves_a--;
		min->n_moves_b--;
	}
}

void	both_rotate_move(t_number *min, t_number **list_1, t_number **list_2)
{
	while (min->n_moves_a && min->n_moves_b)
	{
		rotate_both(list_1, list_2);
		min->n_moves_a--;
		min->n_moves_b--;
	}
}

void	simple_rotate_a(t_number *min, t_number **list)
{
	while (min->n_moves_a)
	{
		rotate_a(list);
		min->n_moves_a--;
	}
}

void	simple_reverse_rotate_a(t_number *min, t_number **list)
{
	while (min->n_moves_a)
	{
		reverse_rotate_a(list);
		min->n_moves_a--;
	}
}

void	simple_rotate_b(t_number *min, t_number **list)
{
	while (min->n_moves_b)
	{
		rotate_b(list);
		min->n_moves_b--;
	}
}
