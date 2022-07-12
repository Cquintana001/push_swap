/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:17:09 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/12 08:09:20 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

int	find_head_position_in_list(t_number *list)
{
	int	position;
	int	max;
	int	maxposition;

	maxposition = 0;
	position = 0;
	max = list->data;
	while (list->next != NULL)
	{
		position++;
		if (max < list->next->data)
		{
			max = list->next->data;
			maxposition = position;
		}
		list = list->next;
	}
	return (maxposition);
}

t_number	*head_of_list(t_number **list, int position_of_head)
{
	while (position_of_head)
	{
		*list = (*list)->next;
		position_of_head--;
	}
	return (*list);
}

int	set_direction(t_number *node, int i, int size)
{
	if (i <= (size / 2))
	{
		node->movetype_b = ROTATE_B;
		return (i);
	}
	else if (i > (size / 2))
	{
		node->movetype_b = RROTATE_B;
		return (size - i);
	}
	return (-1);
}

int	rotation_to_get_head(t_number *node, t_number *aux, int i, int size)
{
	while (aux)
	{
		if (node->data > aux->data)
			return (set_direction(node, i, size));
		else
			aux = aux->next;
		i++;
	}
	return (-1);
}

int	find_position_in_list(t_number *node, t_number *list)
{
	int			i;
	int			j;
	int			size;
	t_number	*aux;

	if (!list)
		return (0);
	j = 0;
	aux = list;
	size = size_of_list(list);
	i = find_head_position_in_list(list);
	aux = head_of_list(&aux, i);
	if (rotation_to_get_head(node, aux, i, size) != -1)
		return (rotation_to_get_head(node, aux, i, size));
	aux = list;
	if (rotation_to_get_head(node, aux, j, size) != -1)
		return (rotation_to_get_head(node, aux, j, size));
	i = find_head_position_in_list(list);
	node->movetype_b = RROTATE_B;
	if (set_direction(node, i, size) != -1)
		return (set_direction(node, i, size));
	return (i);
}
