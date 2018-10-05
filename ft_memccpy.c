/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 20:38:55 by fdubois           #+#    #+#             */
/*   Updated: 2018/10/05 02:29:26 by fffelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memccpy(void *dest, void const *src, int c, size_t n)
{
	size_t i;
	char	*ptr;

	i = 0;
	ptr = dest;
	while (i < n && ((char*) src)[i] != '\0')
	{
		if (((char*)src)[i] == c)
			return ((void *)(ptr + i + 1));
		((char*) dest)[i] = ((char*) src)[i];
		i++;
	}
	return (0);
}
