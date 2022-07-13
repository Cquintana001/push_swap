/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:37:51 by caquinta          #+#    #+#             */
/*   Updated: 2022/07/13 13:22:41 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>
#include "./Libft/libft.h"

#define CHUNCK_NBRS 1

void erase_data(void* node)
{
	node = NULL;
}
 
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = tmp;
		}
	}
}

int	main(int argc, char **argv)
{
	int			numbers;
	t_number	*lista_a;
	t_number	*lista_b;
	t_number *aux;

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
		//system("leaks push_swap");
		final_set(&lista_a, &lista_b);
		while(lista_a)
		{
			aux = lista_a;
			lista_a = lista_a->next;
			free(aux);
		}
		while(lista_b)
		{
			aux = lista_b;
			lista_b = lista_b->next;
			free(aux);
		}
	}
	return (0);
}
