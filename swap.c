/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 10:06:37 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/08 16:22:21 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
 

void swap(Number* *list)
{
	Number *aux;	 

	aux = *list;
	*list = aux->next;
	aux->next = (*list)->next;
	(*list)->next = aux;
}
void swap_a(Number* *list)
{
	swap(list);
	write(1, "sa\n", 3);
}
void swap_b(Number* *list)
{
	swap(list);
	write(1, "sb\n", 3);
}