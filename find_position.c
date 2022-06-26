/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:17:09 by caquinta          #+#    #+#             */
/*   Updated: 2022/06/26 15:14:15 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

/* int find_head_position_in_list(Number *list)
{
	int position;
	int max;

	position = 0;
	while (list->next != NULL)
	{
		if (list->data > list->next->data)
			max = position;
		list = list->next;
		position++;
	}
	return max;
} */

int find_position_in_list(int number, Number *list)
{
	int i;

	i = 0;
	while (list->next != NULL)
	{
		if (number > list->data)
			i++;
		else
			return i;
		list =list->next;
	}
	return 0;
}