/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 09:59:53 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/09 15:00:06 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(Number **list_1, Number **list_2)
{
	Number	*aux;

	if (!(*list_1))
		return ;
	aux = *list_1;
	*list_1 = (*list_1)->next;
	aux->next = *list_2;
	*list_2 = aux;
}

void	push_a(Number **list_1, Number **list_2)
{
	push(list_1, list_2);
	write(1, "pa\n", 3);
}

void	push_b(Number **list_1, Number **list_2)
{
	push(list_1, list_2);
	write(1, "pb\n", 3);
}
