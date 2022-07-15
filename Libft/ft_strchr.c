/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 13:32:21 by caquinta          #+#    #+#             */
/*   Updated: 2022/04/09 18:52:50 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c);

/* int main()
{
	char array[] = "Hola";

	int c = 0;

	printf("Mi funcion da: %s", strchr(array, c));

	return(0);

} */

char	*ft_strchr(const char *s, int c)
{
	int		x;
	char	d;

	d = c;
	x = 0;
	while (s[x])
	{
		if (s[x] == d)
		{
			return ((char *)&s[x]);
		}
		x++;
	}
	x = 0;
	while (s[x])
		x++;
	if (d == 0)
		return ((char *) &s[x]);
	return (NULL);
}
