/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:17:09 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/10 15:42:50 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

/* char	position_to_return(int *i, int size, t_number *node, t_number *aux)
{
	if (node->data > aux->data)
	{
		if (*i <= (size / 2))
		{
			node->movetype_b = ROTATE_B;
			return (*i);
		}
		else if (*i > (size / 2))
		{
			node->movetype_b = RROTATE_B;
			*i = size - *i;
			return (*i);
		}
	}
	else
		aux = aux->next;
	return (-1);
}

int	position_to_return_2(int i, int size, t_number *node, t_number *aux)
{	
	int			j;
	t_number	*list;

	list = aux;
	while (aux)
	{
		j = position_to_return(&i, size, node, aux);
		if (j >= 0)
			return (j);
		aux = aux->next;
		i++;
	}
	i = find_head_position_in_list(list);
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
	return (i);
}

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

t_number	*set_list_to_head(t_number *list)
{
	int	i;

	i = find_head_position_in_list(list);
	while (i)
	{
		list = list->next;
		i--;
	}
	return (list);
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
	size = size_of_list(list);
	aux = set_list_to_head(list);
	i = find_head_position_in_list(list);
	while (aux)
	{
		j = position_to_return(&i, size, node, aux);
		if (j >= 0)
			return (j);
		aux = aux->next;
		i++;
	}
	aux = list;
	i = 0;
	return (position_to_return_2(i, size, node, aux));
} */
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

int	find_position_in_list(t_number *node, t_number *list)
{
	int		i;
	int		j;
	int		size;
	t_number	*aux;

	if (!list)
		return (0);
	j = 0;
	aux = list;
	size = size_of_list(list);
	i = find_head_position_in_list(list);
	while (i)
	{
		aux = aux->next;
		i--;
	}
	i = find_head_position_in_list(list);
	while (aux)
	{
		if (node->data > aux->data)
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
		}
		else
			aux = aux->next;
		i++;
	}
	aux = list;
	while (aux)
	{
		if (node->data > aux->data)
		{
			if (j <= size / 2)
			{
				node->movetype_b = ROTATE_B;
				return (j);
			}
			else if (j > size / 2)
			{
				node->movetype_b = RROTATE_B;
				return (size - j);
			}
		}
		aux = aux->next;
		j++;
	}
	i = find_head_position_in_list(list);
	node->movetype_b = RROTATE_B;
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
	return (i);
}