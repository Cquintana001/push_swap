/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:02:48 by user              #+#    #+#             */
/*   Updated: 2022/04/09 11:05:32 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr);

/*int main()
{
		
		printf("%d\n", ft_atoi("\t\n\r\v\f  469 \n"));
		printf("%d\n", atoi("\t\n\r\v\f  469 \n"));

		return (0);


 }*/

int	ft_atoi(const char *nptr)
{
	int	sum;
	int	sign;

	sum = 0;
	sign = 1;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n' \
		|| *nptr == '\f' || *nptr == '\r' || *nptr == '\v')
		nptr++;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		sum = sum * 10 + *nptr - '0';
		nptr++;
	}
	return (sum * sign);
}
