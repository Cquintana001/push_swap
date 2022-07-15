/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 08:34:35 by user              #+#    #+#             */
/*   Updated: 2022/04/24 10:24:56 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
/* int main()
{
    char	s1[] = "lorem ipsum";
	char	s2[] = "dolor sit amet";

    printf("La nueva string %s", ft_strjoin(s1,s2));
    return(0);



} */

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	int		x;
	char	*ptr;
	int		j;

	j = 0;
	x = 0;
	ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	while (s1[x])
	{
		ptr[x] = s1[x];
		x++;
	}
	while (s2[j])
	{
		ptr[x] = s2[j];
		x++;
		j++;
	}
	ptr[x] = '\0';
	return (ptr);
}
