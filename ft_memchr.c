/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 22:43:47 by fdubois           #+#    #+#             */
/*   Updated: 2018/10/05 02:25:33 by fffelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(void const *s, int c, size_t n)
{
	size_t i;
	const char *ptr;

	i = 0;
	ptr = (const char *)s;
	while (i < n)
	{
		if (((unsigned char*) s)[i] == c)
		{
			return ((void *)(ptr + i));
		}
		i++;
	}
	return (NULL);
}
