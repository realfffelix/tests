/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 22:43:47 by fdubois           #+#    #+#             */
/*   Updated: 2018/08/16 23:47:17 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(void const *s, int c, size_t n)
{
	size_t i;
	const void *ptr;

	i = 0;
	while (i < n)
	{
		if (((unsigned char*) s)[i] == c)
		{
			ptr = s + i;
			return (ptr);
		}
		i++;
	}
	return (NULL);
}
