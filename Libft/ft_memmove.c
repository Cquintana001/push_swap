/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:54:51 by caquinta          #+#    #+#             */
/*   Updated: 2022/04/09 10:53:19 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <memory.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);

/*int		main()
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;
	 

	dest = src + 1;

	
		ft_memmove(dest, src, 8);
			 
		write(1, dest, 22);
		write(1, "\n",1);
	
	return (0);
} */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*array;
	char	*array2;

	array = (char *) src;
	array2 = (char *)dst;
	if (array2 > array)
	{
		while (len--)
			array2[len] = array[len];
	}
	else if (array2 < array)
		ft_memcpy(dst, src, len);
	return (dst);
}
