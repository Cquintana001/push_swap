/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 10:08:15 by caquinta          #+#    #+#             */
/*   Updated: 2022/06/26 15:26:07 by caquinta         ###   ########.fr       */
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
	 
}