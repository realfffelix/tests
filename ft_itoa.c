/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 17:04:46 by fdubois           #+#    #+#             */
/*   Updated: 2018/10/08 17:19:54 by fffelix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits(int n)
{
	int i;

	i = 1;
	if (n < 0)
		i++;
	while (n < -9 || n > 9)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static char	*ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	i = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	while (i < len / 2)
	{
		tmp = str[len - i - 1];
		str[len - i - 1] = str[i];
		str[i] = tmp;
		i++;
	}
	return (str);
}


char	*ft_itoa(int n)
{
	char	*str;
	int i;
	unsigned long long nb;
	
	nb = (n < 0) ? -n: n;
	i = 0;	
	if (!(str = (char*)malloc(sizeof(char) * digits(nb))))
		return (NULL);
	if (nb == 0)
		str[i] = '0';
	while (nb != 0)
	{
		str[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	if (n < 0)
	{
		str[i] = '-';
		nb = -nb;
		i++;
	}
	str[i] = '\0';
	ft_strrev(str);
	return (str);
}
