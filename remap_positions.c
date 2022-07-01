/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remap_positions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 09:40:35 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/01 09:43:25 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void remap_positions(Number* *list)
{	
	Number *aux;
	int i;

	i = 0;
	aux = *list;
		while(aux)
		{
			aux->position =i;
			aux = aux->next;
			i++;
		}
	
}