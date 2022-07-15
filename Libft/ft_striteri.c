/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 11:50:42 by user              #+#    #+#             */
/*   Updated: 2022/04/24 10:21:50 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	x;

	x = 0;
	while (s[x])
	{
		f(x, &s[x]);
		x++;
	}
}
