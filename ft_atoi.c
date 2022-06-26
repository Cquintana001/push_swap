/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 10:52:58 by caquinta          #+#    #+#             */
/*   Updated: 2022/06/26 10:53:41 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_atoi(char *array)
{
	int x;
	int nbr;
	int sign;

	sign = 1;
	nbr =0;
	x = -1;
	 
	if(array[x] == '-')
	 	sign = -1;
		x++;
	while(array[x]>='0' && array[x]<='9' && array[x] != '\0')
	{
		nbr *=10;
		nbr += array[x]-'0';
		x++;
	}
	return(nbr * sign);
}