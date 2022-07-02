/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addnumber.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 10:54:40 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/02 13:24:05 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

Number *addnumber(Number *lista, int nbr)
{
	Number *newnumber, *aux;
	newnumber = (Number *)malloc(sizeof(Number));
	newnumber->data=nbr;
	newnumber->chunk= -1;
	newnumber->n_moves_A = 0;
	newnumber->next=NULL;
	if(lista == NULL){
		lista = newnumber;
	}
	else{

		aux = lista;
		while(aux->next!=NULL){
			aux = aux->next;
		}
		aux->next = newnumber;
	}
	return lista; 

}