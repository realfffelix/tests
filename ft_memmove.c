/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 19:53:44 by fdubois           #+#    #+#             */
/*   Updated: 2018/08/13 00:38:27 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

size_t ft_strlen(char *str);

void	*ft_memmove(void *dest, void *src, size_t n)
{
	size_t i;
	char *str;
	size_t len;
	
	i = 0;
	if (ft_strlen(dest) < ft_strlen(src))
		len = ft_strlen(src);
	else
		len = ft_strlen(dest);
	if (!(dest = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < n)
	{
		((char*) str)[i] = ((char*) src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((char*) dest)[i] = ((char*) str)[i];
		i++;
	}

	return (dest);
}
