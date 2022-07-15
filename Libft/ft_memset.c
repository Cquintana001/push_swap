/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:49:14 by caquinta          #+#    #+#             */
/*   Updated: 2022/04/02 17:33:31 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);
/*
int main()
{
	char array1[] = "hola";
	char array2[] = "hola";
	memset(array1, 65, 6);
	ft_memset(array2, 65, 6);

	printf("%s\n", array2);
	printf("%s\n", array1);
	return(0);
}*/

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		x;
	char		*f;

	f = b;
	x = 0;
	while (x < len)
	{
		f [x] = c;
		x++;
	}
	return (b);
}
