/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:17:09 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/09 15:17:37 by caquinta         ###   ########.fr       */
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

int find_position_in_list(Number* node, Number *list)
{
	if(!list)
		return (0);
	int i;
	int j;
	int size;
	Number *aux;

	j = 0;
	aux = list;
	size = size_of_list(list);
	i = find_head_position_in_list(list); 
	while(i)
	{
		aux = aux->next;
		i--;	
	}
	i = find_head_position_in_list(list);	 
	while(aux)
	{
		 
		if(node->data >aux->data)
		{	if(i<=(size/2))
			{				
				node->movetype_b=ROTATE_B;
				return (i);			
			}
			else if(i>(size/2))
			{
				node->movetype_b=RROTATE_B;
				return (size - i);	
			}
		}
				
		else
			aux = aux->next; 
		i++;
	}
	aux = list;
	while(aux)
	{
		if(node->data >aux->data)
		{
		 
			if(j<=size/2)
			{				
				node->movetype_b=ROTATE_B;
				return (j);			
			}
			else if(j>size/2)
			{
				node->movetype_b=RROTATE_B;
				return (size - j);	
			}			 
		}
		aux = aux->next;
		j++;
	}
	 i = find_head_position_in_list(list); 
	 node->movetype_b=RROTATE_B;
	 if(i<=(size/2))
			{				
				node->movetype_b=ROTATE_B;
				return (i);			
			}
			else if(i>(size/2))
			{
				node->movetype_b=RROTATE_B;
				return (size - i);	
			}
	return (i);
}