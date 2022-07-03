/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_in_chunk.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 09:33:10 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/03 14:44:45 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

Number* find_min_in_chunk(Number* list, int chunknbr)
{
	Number* aux;
	Number* min;

	min = 0;
	aux = list;	
	while(aux)
		{	
			if(aux->chunk == chunknbr)
			{
				min = aux;
				break;
			}				
			aux = aux->next;		 
		}
	while(aux)
		{	
			if(aux->chunk == chunknbr)
			{
				if((min->n_moves_A + min->n_moves_B) > (aux->n_moves_A +aux->n_moves_B))
					min = aux;					 		  
			}
			aux=aux->next;
		}
	return(min);
}