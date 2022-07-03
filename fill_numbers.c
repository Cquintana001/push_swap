/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 11:01:27 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/03 16:44:03 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

static int		ft_wordlen(char *str)
{
	int i = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		++i;
	return (i);
}

static char	*word_dupe(char *str)
{
	int i = 0;
	int len = ft_wordlen(str);
	char *word = malloc(sizeof(char) * (len + 1));
	word[len] = '\0';

	while (i < len)
	{	if(str[i]<'0' || str[i]>'9')
		{
			write(2, "error",5);
			 exit(0);
		}
		word[i] = str[i];
		++i;
	}
	return (word);
}

void	fill_nbrs(char *str, Number* *lista)
{
	 
	int nbr;

	char *string;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		++str;
	while (*str != '\0')
	{	
		string = word_dupe(str);
		  
		while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
			++str;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			++str;
		nbr = ft_atoi(string);
		*lista = addnumber(*lista, nbr);		 
	}
		 
}