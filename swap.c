/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 10:06:37 by caquinta          #+#    #+#             */
/*   Updated: 2022/06/26 10:07:01 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_first_and_second_nodes(Number* *list)
{
	Number *aux;	 

	aux = *list;
	*list = aux->next;
	aux->next = (*list)->next;
	(*list)->next = aux; 	 
}