/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vaporize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 14:04:27 by fdubois           #+#    #+#             */
/*   Updated: 2018/08/15 14:52:23 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	*vaporize(char *str, size_t n)
{
	size_t i;
	size_t times;
	size_t nb;

	i = 0;
	if (!n)
		times = 1;
	else
		times = n;
	nb = times;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
		{
			while ((times + 1) / 2)
			{
				write(1, "\t", 1);
				times--;
			}
			i++;
			times = nb;
		
		}
		while (str[i] > ' ' && str[i] < 127)
		{
			write(1, str + i, 1);
			while (times)
			{
				write(1, " ", 1);
				times--;
			}
			i++;
			times = nb;
		}
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	int i;

	if (ac == 2 || ac == 3)
	{
		i = atoi(av[2]);
		while (i)
		{
			vaporize(av[1], i);
			i--;
		}
	}
	else
		write(1, "u	s	a	g	e", 9);
	
	return (0);
}
