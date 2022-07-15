/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 13:24:19 by caquinta          #+#    #+#             */
/*   Updated: 2022/04/02 17:30:58 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int	ft_toupper(int c);

/* int main()
{
	printf("Mi funcion da: %d\n", ft_tolower(97));
	char a = ft_tolower(97);
	write(1, &a,1);
	return(0);
} */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}
