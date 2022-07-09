/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addnumber.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 10:54:40 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/09 15:47:07 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

t_number	*addnumber(t_number *lista, int nbr)
{
	t_number	*newnumber;
	t_number	*aux;

	newnumber = (t_number *)malloc(sizeof(t_number));
	newnumber->data = nbr;
	newnumber->chunk = -1;
	newnumber->n_moves_a = 0;
	newnumber->next = NULL;
	if (lista == NULL)
	{
		lista = newnumber;
	}
	else
	{
		aux = lista;
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = newnumber;
	}
	return (lista);
}
