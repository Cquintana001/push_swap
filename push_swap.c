/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:37:51 by caquinta          #+#    #+#             */
/*   Updated: 2022/06/16 17:53:12 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *array)
{
	int x;
	int nbr;
	int sign;

	sign = 1;
	nbr =0;
	x = 0;
	while(array[x] == ' '||array[x] == '\n'|| array[x] == '\t' ||array[x] == '\f' || array[x] == '\v')
		x++;
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

int main(int argc, char **argv)
{
	if(argc!=1)
	{
		int x;
		int i;

		i = 0;
		x = 1;
		while(x< argc)
		{	printf("%s", argv[x][i]);
			x++;
		}		 
	}
		 
	return 0;
}