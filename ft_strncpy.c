/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 16:03:41 by fdubois           #+#    #+#             */
/*   Updated: 2018/08/10 16:49:22 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, size_t n)
{
	size_t i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main (int ac, char **av)
{
	if (ac == 4)
	{
		printf("mine : %s\n", ft_strncpy(av[1], av[2], atoi(av[3])));
		printf("real : %s\n", strncpy(av[1], av[2], atoi(av[3])));
	}
	return (0);
}
