/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_in_chunk.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 09:33:10 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/01 11:13:10 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_min_in_chunk(Number* list, int chunknbr)
{
	Number* aux;
	int min;
	
	min = -1;
	aux = list;
	while(aux)
		{	
			if(aux->chunk == chunknbr)
			{
				if(min == -1)
					min = aux->position;
				else if(aux->position<min)
					min=aux->position;			  
			}
			aux = aux->next;
		}

	return(min);
}