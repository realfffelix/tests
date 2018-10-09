/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 17:47:22 by fdubois           #+#    #+#             */
/*   Updated: 2018/10/09 13:37:35 by fffelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (s1 != NULL && s2 != NULL)
	{
		size_t i;

		i = 0;
		while (s1[i] != '\0' && s2[i] != '\0')
		{
			if (s2[i] != s1[i])
				return (0);
			i++;
		}
		if (s1[i] == s2[i])
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
