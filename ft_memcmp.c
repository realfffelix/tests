/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 22:43:47 by fdubois           #+#    #+#             */
/*   Updated: 2018/10/17 19:38:26 by fffelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	size_t i;
	unsigned const char *c1;
	unsigned const char *c2;

	i = 0;
	if (n == 0)
		return (0);
	c1 = (unsigned const char*)s1;
	c2 = (unsigned const char*)s2;
	while (i < n)
	{
		if (c1[i] != c2[i])
			return (c1[i] - c2[i]);
		else
			i++;
	}
	return (0);
}
