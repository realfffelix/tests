/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 22:43:47 by fdubois           #+#    #+#             */
/*   Updated: 2018/08/17 00:05:32 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && ((unsigned char*) s1)[i] == ((unsigned char*) s2)[i])
		i++;
	return (((unsigned char*) s1)[i] - ((unsigned char*) s2)[i]);
}
