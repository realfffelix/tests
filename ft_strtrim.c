/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 17:50:54 by fdubois           #+#    #+#             */
/*   Updated: 2018/10/19 17:27:23 by fffelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	if (s != NULL)
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
	if (!(str = (char*)malloc(sizeof(char) * (end - start + 2))))
		return (NULL);
	i = 0;
	while ((start + i) <= end)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
	}
	else
		return (NULL);
}
