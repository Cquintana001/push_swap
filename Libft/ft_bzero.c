/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:48:57 by caquinta          #+#    #+#             */
/*   Updated: 2022/04/09 10:36:38 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>
#include <unistd.h>

void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
/* int	main(void)
{
	char	array1[];
	char	array2[];

		
	array1[] = "Hola";
	array2[] = "Hola";
	bzero(array1, 0);
	ft_bzero(array2, 0);
	printf("La funcion original da: %s\n", array1);
	printf("Mi funcion da:%s", array2);
	write(1, &array1[2], 1);
	write(1, "\n", 1);
	write(1, &array1[3], 1);
	write(1, "\n", 1);
	write(1, &array2[2], 1);
	write(1, "\n", 1);
	write(1, &array2[3], 1);
	return (0);
} */

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
