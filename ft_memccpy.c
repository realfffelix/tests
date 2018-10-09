/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 20:38:55 by fdubois           #+#    #+#             */
/*   Updated: 2018/10/08 20:56:09 by fffelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void const *src, int c, size_t n)
{
	size_t i;
	char	*ptr;

	i = 0;
	ptr = dest;
	while (i < n && ((char*) src)[i] != '\0')
	{
		((char*) dest)[i] = ((char*) src)[i];
		if (((char*)src)[i] == c)
			return ((void *)(ptr + i + 1));
		i++;
	}
	return (0);
}
