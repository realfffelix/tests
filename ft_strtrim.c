/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 17:50:54 by fdubois           #+#    #+#             */
/*   Updated: 2018/09/02 17:51:00 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*str;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
	start = i;
	while (s[i] != '\0')
	{
		while (s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
			end = i++;
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
	}
	str = ft_memalloc(end - start + 1);
	i = 0;
	while ((start + i) <= end)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
