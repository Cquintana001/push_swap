/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 11:01:27 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/15 12:45:17 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <limits.h>
#include "./Libft/libft.h"

void	check_repeat_number(int nbr, t_number *list)
{
	if (list)
	{
		while (list)
		{
			if (nbr == list->data)
			{
				erase_data(&list);
				write(2, "Error\n", 6);
				exit(0);
			}
			list = list->next;
		}
	}
}

static int	ft_wordlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		++i;
	return (i);
}

static char	*word_dupe(char *str, t_number **lista)
{
	int		i;
	int		len;
	char	*word;

	len = ft_wordlen(str);
	word = malloc(sizeof(char) * (len + 1));
	i = 0;
	word[len] = '\0';
	if (str[0] == '-' && len > 1)
	{
		word[i] = str[0];
		i++;
	}
	while (i < len)
	{
		if ((str[i] < '0' || str[i] > '9'))
			erase_free_data(word, lista);
		word[i] = str[i];
		++i;
	}
	return (word);
}

void	fill_nbrs(char *str, t_number **lista)
{
	int		nbr;
	char	*string;

	while (*str == ' ' || *str == '\t' || *str == '\n')
		++str;
	while (*str != '\0')
	{
		string = word_dupe(str, lista);
		while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
			++str;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			++str;
		nbr = ft_atoi_push(string, lista);
		free(string);
		check_repeat_number(nbr, *lista);
		*lista = addnumber(*lista, nbr);
	}
}

t_number	*get_list(char **array, t_number **list)
{
	int	j;

	j = 1;
	while (array[j])
	{
		fill_nbrs(array[j], list);
		j++;
	}
	if (*list == NULL)
		return (0);
	check_if_list_is_sorted(*list);
	return (*list);
}
