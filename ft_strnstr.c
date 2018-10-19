/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 23:31:46 by fdubois           #+#    #+#             */
/*   Updated: 2018/10/18 22:58:30 by fffelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (haystack[i] == '\0')
		return (NULL);
	if (needle[i] == '\0')
		return ((char*)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		while (haystack[i + j] == needle[j] && (i + j < len))
		{
			if (needle[j + 1] == '\0')
				return ((char*)(haystack + i));
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
