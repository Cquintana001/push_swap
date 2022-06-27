/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:17:09 by caquinta          #+#    #+#             */
/*   Updated: 2022/06/27 16:49:29 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

int find_head_position_in_list(Number *list)
{
	int position;
	int max;
	int maxposition;
	
	maxposition = 0;
	position = 0;
	max = list->data;
	while (list->next != NULL)
	{	position++;
		 
		if (max < list->next->data)
		{	max = list->next->data;
		 	maxposition = position;
		}
		list = list->next;	 
	}	 
	return maxposition;
}

int find_position_in_list(int number, Number *list)
{
	int i;
	int j;
	Number *aux;

	j = 0;
	aux = list;
	
	i = find_head_position_in_list(list); 
	while(i)
	{
		aux = aux->next;
		i--;	
	}
	i = find_head_position_in_list(list);
	 
	while(aux)
	{
		 
		if(number>aux->data)
			return i;
		else
			aux = aux->next; 
		i++;
	}
	aux = list;
	while(aux)
	{
		if(number>aux->data)
			return j;
		aux = aux->next;
		j++;
	}
	 i = find_head_position_in_list(list); 
	return (i);
}