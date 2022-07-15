/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:40:10 by user              #+#    #+#             */
/*   Updated: 2022/04/24 10:32:27 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t	ft_strlen(const char *s);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		x;
	char	*ptr;

	if (!s || !f)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!(ptr))
		return (NULL);
	x = 0;
	while (s[x])
	{
		ptr[x] = f(x, s[x]);
		x++;
	}
	ptr[x] = '\0';
	return (ptr);
}
