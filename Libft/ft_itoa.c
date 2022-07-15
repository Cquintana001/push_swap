/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:10:37 by user              #+#    #+#             */
/*   Updated: 2022/04/24 12:21:35 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_itoa(int n);
size_t	ft_strlen(const char *s);

int	static	ft_itoa_get_size(long t)
{
	int		size;

	size = 0;
	if (t < 0)
	{
		t *= -1;
		size++;
	}
	while (t >= 10)
	{
		t = (t - t % 10) / 10;
		size++;
	}
	size++;
	return (size);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		size;
	long	t;

	t = n;
	size = ft_itoa_get_size(t);
	ptr = (char *)malloc(sizeof(char) * size + 1);
	if (!ptr)
		return (NULL);
	if (t < 0)
	{
		ptr[0] = '-';
		t *= -1;
	}
	ptr[size] = '\0';
	while (t >= 10)
	{
		ptr[size - 1] = (t % 10) + '0';
		t = (t - t % 10) / 10;
		size--;
	}
	ptr[size - 1] = t + '0';
	return (ptr);
}
