/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 17:48:37 by fdubois           #+#    #+#             */
/*   Updated: 2018/10/08 21:15:15 by fffelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	j;
	int	len;
	char	*str;

	i = 0;
	j = 0;
	if (s1 != NULL && s2 != NULL)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		if (!(str = (char*)malloc(sizeof(char) * len + 1)))
			return (NULL);
		while (s1[i] != '\0')
		{
			str[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
			str[i++] = s2[j++];
		str[i] = '\0';
		return (str);
	}
	else
		return (NULL);
}
