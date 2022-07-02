/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remap_positions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 09:40:35 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/02 13:15:41 by caquinta         ###   ########.fr       */
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