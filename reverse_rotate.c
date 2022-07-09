/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 10:08:15 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/09 15:47:07 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	reverse_rotate(t_number **list)
{
	t_number	*aux;

	aux = *list;
	while (aux->next->next != NULL)
		aux = aux->next;
	aux->next->next = *list;
	*list = aux->next;
	aux->next = NULL;
}

void	reverse_rotate_a(t_number **list)
{
	reverse_rotate(list);
	write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_number **list)
{
	reverse_rotate(list);
	write(1, "rrb\n", 4);
}

void	reverse_rotate_both(t_number **list_1, t_number **list_2)
{
	reverse_rotate(list_1);
	reverse_rotate(list_2);
	write(1, "rrr\n", 4);
}
