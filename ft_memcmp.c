/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 22:43:47 by fdubois           #+#    #+#             */
/*   Updated: 2018/09/04 19:42:43 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	size_t i;

	i = 0;
	while (((unsigned char*) s1)[i] != '\0' && ((unsigned char*) s2)[i] != '\0' && i < (n - 1))
	{
		if (((unsigned char*) s1)[i] != ((unsigned char*) s2)[i])
			return (((unsigned char*) s1)[i] - ((unsigned char*) s2)[i]);
		i++;
	}
	return (((unsigned char*) s1)[i] - ((unsigned char*) s2)[i]);
}
