/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 13:59:26 by caquinta          #+#    #+#             */
/*   Updated: 2022/04/09 18:53:40 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c);

/* int main()
{
	 char            *str;
        char            str2[] = "bonjour";
        

		if (!(str = ft_strrchr(str2 + 2, 'b')))
                        printf("NULL");
                else
                        printf("%s",str);

	 

} */

char	*ft_strrchr(const char *s, int c)
{
	int		x;
	char	d;

	d = c;
	x = 0;
	while (s[x])
		x++;
	if (d == 0)
		return ((char *) &s[x]);
	x--;
	while (x >= 0)
	{
		if (s[x] == d)
		{
			return ((char *)&s[x]);
		}
		x--;
	}
	return (NULL);
}
