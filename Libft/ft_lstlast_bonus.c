/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:52:38 by user              #+#    #+#             */
/*   Updated: 2022/04/24 09:37:19 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;
	int		x;

	x = 0;
	temp = lst;
	if (lst == NULL)
		return (lst);
	while (temp->next != NULL)
	{
		temp = temp->next;
		x++;
	}
	return (temp);
}
