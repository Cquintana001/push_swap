/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 10:07:32 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/09 15:08:35 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(Number **list)
{
	Number	*aux;

	aux = *list;
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = *list;
	*list = (*list)->next;
	aux->next->next = NULL;
}

void	rotate_a(Number **list)
{
	rotate(list);
	write(1, "ra\n", 3);
}

void	rotate_b(Number **list)
{
	rotate(list);
	write(1, "rb\n", 3);
}

void	rotate_both(Number **list_1, Number **list_2)
{
	rotate(list_1);
	rotate(list_2);
	write(1, "rr\n", 3);
}
