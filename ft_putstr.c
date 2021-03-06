/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 17:06:27 by fdubois           #+#    #+#             */
/*   Updated: 2018/11/06 16:56:26 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char const *s)
{
	size_t i;

	i = 0;
	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			write(1, s + i, 1);
			i++;
		}
	}
}
