/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:25:40 by user              #+#    #+#             */
/*   Updated: 2022/04/24 08:59:17 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memset(void *b, int c, size_t len);

void	*ft_calloc(size_t nmemb, size_t size)
{	
	void	*array;

	array = malloc(nmemb * size);
	if (array)
	{
		ft_memset(array, 0, nmemb * size);
		return (array);
	}
	else
		return (NULL);
}
