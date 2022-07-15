/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:30:25 by user              #+#    #+#             */
/*   Updated: 2022/04/18 12:19:58 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	int		temp;
	t_list	*elem;

	temp = 0;
	if (lst == NULL)
		return (temp);
	elem = lst;
	while (elem != NULL)
	{
		elem = elem->next;
		temp++;
	}
	return (temp);
}
