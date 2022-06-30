/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printlist.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 11:10:56 by caquinta          #+#    #+#             */
/*   Updated: 2022/06/30 14:54:30 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void print_list(Number* list)
{
	while(list)
	{
		printf("%d\n", list->position);
		list = list->next;
	}
}