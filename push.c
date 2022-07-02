/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 09:59:53 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/02 08:19:47 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
 

void put_top_element_of_list_1_in_top_of_list_2(Number* *list_1, Number* *list_2)
{	
	if(!(*list_1))
		return;
	Number* aux;

	aux =	*list_1;
	*list_1 = (*list_1)->next;
	aux->next = *list_2;
	*list_2 = aux;
	//write(1, "pa\n", 3);

}