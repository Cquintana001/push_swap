/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 10:06:37 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/09 15:47:07 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_number **list)
{
	t_number	*aux;

	aux = *list;
	*list = aux->next;
	aux->next = (*list)->next;
	(*list)->next = aux;
}

void	swap_a(t_number **list)
{
	swap(list);
	write(1, "sa\n", 3);
}

void	swap_b(t_number **list)
{
	swap(list);
	write(1, "sb\n", 3);
}
