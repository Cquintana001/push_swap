/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:30:35 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/09 15:47:07 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	final_set(t_number **list_1, t_number **list_2)
{
	int	size;
	int	i;

	i = find_head_position_in_list(*list_2);
	size = size_of_list(*list_2);
	if (i <= (size / 2))
	{
		while (i--)
			rotate_b(list_2);
	}
	else if (i > (size / 2))
	{
		i = size - i;
		while (i)
		{
			reverse_rotate_b(list_2);
			i--;
		}
	}
	while (size)
	{
		push_a(list_2, list_1);
		size--;
	}
}
