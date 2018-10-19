/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 19:53:44 by fdubois           #+#    #+#             */
/*   Updated: 2018/10/18 23:04:07 by fffelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, void const *src, size_t n)
{
	size_t i;
	size_t m;
	unsigned char *d;
	unsigned char *s;
	unsigned char tmp[n];
	
	i = 0;
	m = n;
	d = (unsigned char*)dest;
	s = (unsigned char*)src;
	while (i < m)
	{
		tmp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = tmp[i];
		i++;
	}
	return (dest);
}
