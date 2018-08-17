/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 14:56:33 by fdubois           #+#    #+#             */
/*   Updated: 2018/08/17 15:07:16 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char 	*ft_strcat(char *dest, char const *src)
{
	size_t i;
	size_t len;

	while (dest[len] != '\0')
		len++;
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
