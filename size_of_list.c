/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_of_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 10:10:57 by caquinta          #+#    #+#             */
/*   Updated: 2022/06/26 10:11:51 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

int size_Of_List(Number *list)
{
	int x;

	x = 0;
	while(list->next!=NULL)
	{
		list = list->next;
		x++;
	}
	return (x);
}