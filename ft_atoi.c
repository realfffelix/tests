/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 15:49:37 by fdubois           #+#    #+#             */
/*   Updated: 2018/10/19 17:53:59 by fffelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *str)
{
	int	i;
	int	nb;
	int	sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		if (nb == 214748364 && str[i] == '8' && sign == -1)
			return (-2147483648);
		if (((unsigned long long)((nb * 10 + str[i] - '0'))) > 2147483647)
			return (sign == -1? 0: -1);
		nb = 10 * nb + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}
