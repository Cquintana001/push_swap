/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:19:01 by caquinta          #+#    #+#             */
/*   Updated: 2022/04/09 12:02:17 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src,
			size_t dstsize);
size_t	ft_strlen(const char *s);

/*int main()
{
	char	dest[15];
	char	dest1[15];
	size_t	x;
	size_t	srclen;
	size_t	dstlen;
	size_t	y;

	dest[15] = "rrrrrr";
	dest[14] = 'a';
	
	printf("La funcion original da: %zu\n", strlcat(dest,
				"lorem ipsum dolor sit amet", 15));
	printf("dest da: %s\n", dest);
		
	
	dest1[15] = "rrrrrr";
	dest1[14] = 'a';
	
	printf("Mi funcion da: %zu\n", ft_strlcat(dest1,
				"lorem ipsum dolor sit amet", 15));
	printf("dest da: %s\n\n", dest1);
	
		
	
}*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{	
	size_t	x;
	size_t	srclen;
	size_t	dstlen;
	size_t	y;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	x = dstlen;
	y = 0;
	while (src[y] && x < dstsize - 1 && dstsize != 0)
	{
		dst[x] = src[y];
		x++;
		y++;
	}
	if (x <= dstsize - 1)
		dst[x] = '\0';
	if (dstsize < dstlen)
		return (dstsize + srclen);
	else
		return (dstlen + srclen);
}
