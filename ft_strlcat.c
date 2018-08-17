/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 15:08:27 by fdubois           #+#    #+#             */
/*   Updated: 2018/08/17 15:36:46 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, char const *src, size_t size)
{
	size_t i;
	size_t buf;
	
	i = 0;
	buf = ft_strlen(dest) + ft_strlen(src);
	while (src[i] != '\0' &&)
	{
		dest[ft_strlen(dest) + i] = src[i];
	}
	return (size);
