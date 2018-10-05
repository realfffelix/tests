/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 19:53:44 by fdubois           #+#    #+#             */
/*   Updated: 2018/10/05 15:29:03 by fffelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, void const *src, size_t n)
{
	size_t i;
	char *d;
	char *s;
//	size_t len;
	
	i = 0;
	d = (char*)dest;
	s = (char*)src;
/*	if (ft_strlen(d) < ft_strlen(s))
		len = ft_strlen(src);
	else
		len = ft_strlen(dest);
*/	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
