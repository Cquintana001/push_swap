/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 10:08:15 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/08 16:46:32 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
 

void reverse_rotate(Number* *list)
{
	Number *aux;
	aux = *list;	 
	while(aux->next->next != NULL)
		aux = aux->next;	 
	aux->next->next =*list;
	*list = aux->next;
	aux->next =NULL;
	//write(1, "rra\n", 4);
}
void reverse_rotate_a(Number* *list)
{
	reverse_rotate(list);
	write(1, "rra\n", 4);
}
void reverse_rotate_b(Number* *list)
{
	reverse_rotate(list);
	write(1, "rrb\n", 4);
}
void reverse_rotate_both(Number* *list_1, Number* *list_2)
{
	reverse_rotate(list_1);
	reverse_rotate(list_2);
	write(1, "rrr\n",4);
}