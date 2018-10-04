/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fffelix <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 00:44:31 by fffelix           #+#    #+#             */
/*   Updated: 2018/10/04 01:12:09 by fffelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	if (lst != NULL && f != NULL)
	{
		t_list *new;
		t_list *first;
		new = ft_lstnew(f(lst), lst->content_size);
		first = new;
		lst = lst->next;
		while (lst != NULL)
		{
			new->next = ft_lstnew(f(lst), lst->content_size);
			new = new->next;
			lst = lst->next;
		}
		return (first);
	}
	else
		return (NULL);
}
