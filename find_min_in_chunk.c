/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_in_chunk.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 09:33:10 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/09 15:11:11 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

Number	*find_min_in_chunk(Number *list, int chunknbr)
{
	Number	*aux;
	Number	*min;

	min = 0;
	aux = list;
	while (aux)
	{
		if (aux->chunk == chunknbr)
		{
			min = aux;
			break ;
		}
		aux = aux->next;
	}
	while (aux)
	{
		if (aux->chunk == chunknbr)
		{
			if ((min->n_moves_a + min->n_moves_b) > \
				(aux->n_moves_a + aux->n_moves_b))
				min = aux;
		}
		aux = aux->next;
	}
	return (min);
}
