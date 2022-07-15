/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:10:29 by caquinta          #+#    #+#             */
/*   Updated: 2022/04/09 12:02:58 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

size_t	ft_strlcpy(char *dst, const char *src,
			size_t dstsize);

/* int main()
{
		char    *dest;
	size_t	x;
	size_t	size;

		dest = (char *)malloc(sizeof(*dest) * 15);
	memset(dest, 0, 15);
    memset(dest, 'r', 6);
	printf("Mi funcion da: %zu\n", ft_strlcpy(dest,
				"lorem ipsum dolor sit amet", 0));
	printf("%s\n", dest);
	printf("La funcion original da: %zu\n", strlcpy(dest,
				"lorem ipsum dolor sit amet", 0));
	printf("%s", dest);
	
} */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{	
	size_t	x;
	size_t	size;

	x = 0;
	while (src[x])
		x++;
	size = x;
	x = 0;
	if (dstsize != 0)
	{
		while (src[x] && x < dstsize - 1)
		{
			dst[x] = src[x];
			x++;
		}
		dst[x] = '\0';
	}
	return (size);
}
