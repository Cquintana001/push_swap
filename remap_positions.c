/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remap_positions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 09:40:35 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/08 17:21:35 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void remap_positions(Number* list)
{	
	Number *aux;

	aux = list;
		while(aux)
		{
	 		movements(aux, list);
			aux = aux->next;			
		}
	
}
Number* map_moves_in_B(Number *list_1, Number* list_2)
{ 
			  while(list_1)
				{
					list_1->n_moves_B = find_position_in_list(list_1, list_2);					 
					list_1 = list_1->next;
				} 
	return(list_1);
}