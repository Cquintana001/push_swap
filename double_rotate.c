/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 08:13:09 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/10 15:29:21 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	simple_reverse_rotate_b(t_number *min, t_number **list)
{
	while (min->n_moves_b > 0)
	{
		reverse_rotate_b(list);
		min->n_moves_b--;
	}
}

void	do_moves(t_number *min, t_number **list_1, t_number **list_2)
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
