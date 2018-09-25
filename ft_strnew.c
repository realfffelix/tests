/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 00:44:15 by fdubois           #+#    #+#             */
/*   Updated: 2018/09/25 14:58:15 by fffelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	size_t i;
	char *mem;
	
	i = 0;
	if (!(mem = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (i <= size)
	{
		mem[i] = '\0';
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
