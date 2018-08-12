/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 17:49:16 by fdubois           #+#    #+#             */
/*   Updated: 2018/08/12 17:51:49 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(char *dest, char *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((char*) dest)[i] = ((char*) src)[i];
		i++;
	}
	return (dest);
}
