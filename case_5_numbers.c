/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_5_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:48:51 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/15 07:52:13 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int	position_five_numbers(int nbr, t_number *list)
{
	int	i;

	i = 0;
	while (list)
	{
		if (nbr < list->data)
			break ;
		list = list->next;
		i++;
	}
	return (i);
}

int	min_position(t_number *list)
{
	int	i;
	int	j;
	int	aux;

	aux = list->data;
	i = 0;
	j = 0;
	while (list)
	{
		if (aux > list->data)
		{
			j = i;
			aux = list->data;
		}
		list = list->next;
		i++;
	}
	return (j);
}

void	rotate_list_b(t_number **list_a, t_number **list_b)
{
	int	i;
	int	size;

	size = size_of_list(*list_a);
	i = min_position(*list_a);
	if (i <= (size / 2))
	{
		while (i)
		{
			rotate_a(list_a);
			i--;
		}
	}
	else if (i > (size / 2))
	{
		i = size - i;
		while (i)
		{
			reverse_rotate_a(list_a);
			i--;
		}
	}
	push_b(list_a, list_b);
}

void	sort_five_numbers(t_number **list_A, t_number **list_B)
{
	int	j;

	j = 0;
	while (j < 2)
	{
		rotate_list_b(list_A, list_B);
		j++;
	}
	if ((*list_B)->data < (*list_B)->next->data)
		swap_b(list_B);
	sort_three_numbers(list_A);
	push_a(list_B, list_A);
	push_a(list_B, list_A);
}
