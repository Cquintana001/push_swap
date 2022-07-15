/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 09:02:04 by user              #+#    #+#             */
/*   Updated: 2022/04/24 16:24:46 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set);

int	ft_trim_left(char const *s1, char const *set)
{
	int	x;
	int	j;
	int	index;
	int	check;

	index = ft_strlen(s1) - 1;
	x = 0;
	check = 0;
	while (x <= index)
	{
		j = 0;
		check = 0;
		while (set[j])
		{
			if (set[j] == s1[x])
				check = 1;
			j++;
		}
		if (check == 1)
			x++;
		else
			break ;
	}
	return (x);
}

int	ft_trim_right(char const *s1, char const *set, int x)
{
	int	j;
	int	index;
	int	check;

	index = ft_strlen(s1) - 1;
	check = 0;
	while (index > x)
	{
		j = 0;
		check = 0;
		while (set[j])
		{
			if (set[j] == s1[index])
				check = 1;
			j++;
		}
		if (check == 1)
			index--;
		else
			break ;
	}
	return (index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		x;
	int		j;
	int		index;
	char	*ptr;

	if (!s1 && !set)
		return (NULL);
	x = ft_trim_left(s1, set);
	index = ft_trim_right(s1, set, x);
	ptr = (char *)malloc(index - x + 2);
	if (!ptr)
		return (NULL);
	j = 0;
	while (x <= index)
	{
		ptr[j] = s1[x];
		j++;
		x++;
	}
	ptr[j] = '\0';
	return (ptr);
}
