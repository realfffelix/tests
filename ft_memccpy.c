/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 20:38:55 by fdubois           #+#    #+#             */
/*   Updated: 2018/08/13 15:07:27 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memccpy(void *dest, void const *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && ((char*) src)[i] != '\0')
	{
		if (((char*)src)[i] == c)
			return ((char*)(dest + i + 1));
		((char*) dest)[i] = ((char*) src)[i];
		i++;
	}
	return (0);
}
