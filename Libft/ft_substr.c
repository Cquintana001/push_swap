/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:23:08 by user              #+#    #+#             */
/*   Updated: 2022/04/24 10:45:13 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	x;
	size_t	len1;
	char	*ptr;

	ptr = "";
	len1 = ft_strlen(s);
	x = 0;
	if (len < len1)
		ptr = malloc(len + 1);
	else
		ptr = malloc(len1 + 1);
	if (!ptr)
		return (NULL);
	if (start < len1)
	{
		while (s[start] && x < len)
		{
			ptr[x] = s[start];
			x++;
			start++;
		}
	}
	ptr[x] = '\0';
	return (ptr);
}
