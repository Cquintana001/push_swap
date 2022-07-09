/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:31:04 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/09 15:16:52 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_x_numbers(int numbers, Number **list_1, Number **list_2)
{
	Number	*min;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < numbers)
	{
		while (j < numbers && list_1)
		{
			min = map_moves_in_b(*list_1, *list_2);
			min = find_min_in_chunk(*list_1, i);
			do_moves(min, list_1, list_2);
			push_b(list_1, list_2);
			if (size_of_list(*list_2) == 2)
			{
				if ((*list_2)->data < (*list_2)->next->data)
					swap_b(list_2);
			}
			remap_positions(*list_1);
			j++;
		}
		i++;
	}
}

void	check_numbers(int numbers, Number **list_1, Number **list_2)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (numbers == 3)
		sort_three_numbers(list_1);
	if (numbers == 5)
		sort_five_numbers(list_1, list_2);
	sort_x_numbers(numbers, list_1, list_2);
}
