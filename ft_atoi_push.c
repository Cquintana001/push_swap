/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 10:52:58 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/15 12:50:13 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	check_limits(int nbr, int c, t_number **lista, char *array)
{
	int	aux1;
	int	aux2;

	aux1 = nbr * 10;
	aux2 = (nbr * 10) + c;
	if (nbr >= 0)
	{
		if (nbr > aux1 || nbr > aux2)
		{
			erase_data(lista);
			free(array);
			write(2, "Error\n", 6);
			exit(0);
		}
	}
	else if (nbr < aux1 || nbr < aux2)
	{
		erase_data(lista);
		free(array);
		write(2, "Error\n", 6);
		exit(0);
	}
}

int	ft_atoi_push(char *array, t_number **lista)
{
	int	x;
	int	nbr;
	int	sign;

	sign = 1;
	nbr = 0;
	x = 0;
	if (array[x] == '-')
	{
		sign = -1;
		x++;
	}
	while (array[x] >= '0' && array[x] <= '9' && array[x] != '\0')
	{
		if (nbr != 0)
			check_limits(nbr, (array[x] - '0') * sign, lista, array);
		nbr *= 10;
		nbr += (array[x] - '0') * sign;
		x++;
	}
	return (nbr);
}
