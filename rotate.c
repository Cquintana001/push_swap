/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 10:07:32 by caquinta          #+#    #+#             */
/*   Updated: 2022/06/26 10:47:26 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void first_node_becomes_the_last(Number* *list)
{
	Number *aux;
	aux = *list;	 
	while(aux->next != NULL)
		aux = aux->next;
	aux->next = *list;
	*list = (*list)->next;
	aux->next->next =NULL;
}