/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fffelix <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:54:00 by fffelix           #+#    #+#             */
/*   Updated: 2018/10/08 21:18:37 by fffelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	if (s != NULL && f != NULL)
	{
		size_t	i;
		char	*str;

		if (!(str = (char*)malloc(ft_strlen(s) + 1)))
			return (NULL);
		i = 0;
		while (s[i] != '\0')
		{
			str[i] = f(*(s + i));
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	else
		return (NULL);
}
