/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:34:10 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/15 13:35:35 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

int	check_if_list_is_sorted(t_number *lista_A)
{	
	t_number	*aux;

	aux = lista_A;
	while (lista_A->next != NULL)
	{
		if (lista_A->data > lista_A->next->data)
			return (0);
		lista_A = lista_A->next;
	}
	erase_data(&aux);
	exit(0);
}
