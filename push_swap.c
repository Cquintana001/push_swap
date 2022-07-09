/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:37:51 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/09 15:57:35 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

#define CHUNCK_NBRS 1

int	main(int argc, char **argv)
{
	int			numbers;
	t_number	*lista_a;
	t_number	*lista_b;

	if (argc != 1)
	{
		lista_a = NULL;
		lista_b = NULL;
		lista_a = get_list(argv, &lista_a);
		fill_chunks(&lista_a, CHUNCK_NBRS);
		numbers = size_of_list(lista_a);
		if (numbers == 0)
			exit(0);
		check_numbers(numbers, &lista_a, &lista_b);
		final_set(&lista_a, &lista_b);
	}
	return (0);
}
