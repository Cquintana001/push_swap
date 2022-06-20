/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:37:51 by caquinta          #+#    #+#             */
/*   Updated: 2022/06/19 11:18:38 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *array)
{
	int x;
	int nbr;
	int sign;

	sign = 1;
	nbr =0;
	x = 0;
	while(array[x] == ' '||array[x] == '\n'|| array[x] == '\t' ||array[x] == '\f' || array[x] == '\v')
		x++;
	if(array[x] == '-')
	 	sign = -1;
		x++;
	while(array[x]>='0' && array[x]<='9' && array[x] != '\0')
	{
		nbr *=10;
		nbr += array[x]-'0';
		x++;
	}
	return(nbr * sign);
		
}
int		ft_wordlen(char *str)
{
	int i = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		++i;
	return (i);
}

char	*word_dupe(char *str)
{
	int i = 0;
	int len = ft_wordlen(str);
	char *word = malloc(sizeof(char) * (len + 1));
	word[len] = '\0';

	while (i < len)
	{
		word[i] = str[i];
		++i;
	}
	return (word);
}

void	fill_words(char **array, char *str)
{
	int word_index = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		++str;
	while (*str != '\0')
	{
		array[word_index] = word_dupe(str);
		++word_index;
		while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
			++str;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			++str;
	}
}

int		count_words(char *str)
{
	int num_words = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		++str;
	while (*str != '\0')
	{
		++num_words;
		while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
			++str;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			++str;
	}
	return (num_words);
}

char	**ft_split(char *str)
{
	int		num_words;
	char	**array;

	num_words = count_words(str);
	array = malloc(sizeof(char *) * (num_words + 1));
	array[num_words] = 0;

	fill_words(array, str);
	return (array);
}
int main(int argc, char **argv)
{
	if(argc!=1)
	{
		int x;
		int i;
		int count;
		
		count = 0;
		i = 0;
		x = 1;
		while(x< argc)
		{		
			 count += count_words(argv[x]); 
			x++;
		}
		int *nbr = malloc(sizeof(int)*count);
		
		
	}
		 
	return 0;
}