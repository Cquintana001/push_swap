/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:18:25 by user              #+#    #+#             */
/*   Updated: 2022/04/10 16:28:59 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);
/* int main()
{
	char	tab[] = "";
	size_t	x;
	char	*q;

       
		printf("%s\n", (char *)ft_memchr(tab, 2, 3));
        printf("%s\n", (char *)memchr(tab, 2, 3));
    return (0);
} */

void	*ft_memchr(const void *s, int c, size_t n)
{	
	size_t			x;
	unsigned char	*q;
	unsigned char	d;

	d = c;
	q = (unsigned char *)s;
	x = 0;
	while (x < n)
	{
		if (*q == d)
		{
			return ((void *)q);
		}
		q++;
		x++;
	}
	return (NULL);
}
