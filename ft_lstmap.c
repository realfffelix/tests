/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fffelix <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 00:44:31 by fffelix           #+#    #+#             */
/*   Updated: 2018/10/23 02:04:58 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	if (lst != NULL && f != NULL)
	{
		t_list *new;
		t_list *first;
		if (!(new = f(lst)))
			return (NULL);
		first = new;
		while (lst->next)
		{
			lst = lst->next;
			if (!(new->next = f(lst)))
				return (NULL);
			new = new->next;
		}
		return (first);
	}
	return (NULL);
}
