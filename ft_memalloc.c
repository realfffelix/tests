/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 00:44:15 by fdubois           #+#    #+#             */
/*   Updated: 2018/11/06 16:52:21 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*mem;

	i = 0;
	if (!(mem = (void*)malloc(size)))
		return (NULL);
	while (i < size)
	{
		((char*)mem)[i] = 0;
		i++;
	}
	return (mem);
}
