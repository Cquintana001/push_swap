/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_chunks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 09:15:42 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/09 15:47:07 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

int	check_movements(t_number **node, int movements, int size)
{
	if (movements > size / 2)
	{
		movements = size - movements;
		(*node)->movetype_a = RROTATE_A;
	}
	else
		(*node)->movetype_a = ROTATE_A;
	(*node)->n_moves_a = movements;
	return (movements);
}

int	movements(t_number *node, t_number *list)
{
	int	movements;
	int	size;

	movements = 0;
	size = size_of_list(list);
	while (list->next != NULL)
	{
		if (list->data == node->data)
			break ;
		else
		{
			list = list->next;
			movements++;
		}
	}
	if (list->data == node->data)
	{
		movements = check_movements(&node, movements, size);
		return (movements);
	}
	return (-1);
}

void	sorted_list(t_number **list, int i)
{
	t_number	*min;
	t_number	*aux;

	aux = *list;
	min = *list;
	while (min)
	{
		if (min->chunk == -1)
			break ;
		min = min->next;
	}
	while (aux->next != NULL)
	{
		if (aux->chunk == -1 && min->data > aux->data)
			min = aux;
		aux = aux->next;
	}
	if (aux->chunk == -1 && min->data > aux->data)
		min = aux;
	min->chunk = i;
	movements(min, *list);
}

void	fill_chunks(t_number **list, int chunks)
{
	int	i;
	int	numbers;
	int	aux;

	numbers = (size_of_list(*list) / chunks);
	i = 0;
	while (i < chunks)
	{
		aux = numbers;
		while (aux > 0)
		{
			sorted_list(list, i);
			aux--;
		}
		i++;
	}
}
