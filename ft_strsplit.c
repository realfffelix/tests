/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 11:09:08 by fdubois           #+#    #+#             */
/*   Updated: 2018/08/13 12:24:37 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t		wordz(char *s, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

size_t		charz(char *s, size_t *i, char c)
{
	size_t count;

	count = 0;
	while (s[*i] && s[*i] != c)
	{
		count++;
		(*i)++;
	}
	return (count);
}

void	*ft_strcpy(char *dest, char *src, char c)
{
	size_t i;

	i = 0;
	while (src[i] && src[i] != c)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	**ft_strsplit(char *s, char c)
{
	size_t i;
	size_t j;
	size_t k;
	char **tab;

	i = 0;
	k = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * wordz(s, c) + 1)))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			j = i;
			if (!(tab[k] = (char*)malloc(sizeof(char*) * charz(s, &i, c) + 1)))
				return (NULL);
			ft_strcpy(tab[k], s + j, c);
			k++;
		}
	}
	tab[k] = 0;
	return (tab);
	free(tab);
}
