/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 08:56:49 by user              #+#    #+#             */
/*   Updated: 2022/04/09 18:59:31 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;
	size_t	z;
	char	*hay;

	hay = (char *)haystack;
	x = -1;
	if (!needle[0])
		return (hay);
	while (haystack[++x] && x < len)
	{
		if (haystack[x] == needle[0])
		{
			y = x + 1;
			z = 1;
			while (haystack[y] == needle[z] && needle[z] && haystack[y] && y++
				< len)
				z++;
			if (z == ft_strlen(needle))
				return (hay + x);
		}
	}
	return (NULL);
}
