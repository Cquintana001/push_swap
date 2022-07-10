/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_in_chunk.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 09:33:10 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/10 15:41:04 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_number	*find_min_in_chunk(t_number *list, int chunknbr)
{
	t_number	*aux;
	t_number	*min;

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
	//aux = list;
	while (aux)
	{
		if (aux->chunk == chunknbr)
		{
			if ((min->n_moves_a + min->n_moves_b) >= \
				(aux->n_moves_a + aux->n_moves_b))
				min = aux;
		}
		aux = aux->next;
	}
	return (min);
}
