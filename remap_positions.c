/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remap_positions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 09:40:35 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/10 11:03:01 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	remap_positions(t_number *list)
{
	t_number	*aux;

	aux = list;
	while (aux)
	{
		movements(aux, list);
		aux = aux->next;
	}
}

t_number	*map_moves_in_b(t_number *list_1, t_number *list_2)
{
	while (list_1)
	{
		list_1->n_moves_b = find_position_in_list(list_1, list_2);
		list_1 = list_1->next;
	}
	return (list_1);
}
