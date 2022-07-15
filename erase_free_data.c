/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_free_data.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:00:19 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/15 10:22:26 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <limits.h>
#include "./Libft/libft.h"

void	erase_free_data(char *word, t_number **lista)
{
	erase_data(lista);
	free(word);
	write(2, "Error\n", 6);
	exit(0);
}
