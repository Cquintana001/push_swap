/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caquinta <caquinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 07:23:30 by user              #+#    #+#             */
/*   Updated: 2022/04/24 09:40:33 by caquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*ret;

	if (!lst)
		return (0);
	ret = ft_lstnew((*f)(lst->content));
	if (!ret)
		return (0);
	tmp = ret;
	lst = lst->next;
	while (lst)
	{		
		tmp->next = ft_lstnew((*f)(lst->content));
		if (!tmp->next)
		{
			ft_lstclear(&ret, del);
			return (0);
		}
		tmp = tmp->next;
		lst = lst->next;
	}
	return (ret);
}
