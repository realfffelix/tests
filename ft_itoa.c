
#include "libft.h"
#include <stdio.h>

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
	int neg;
	int i;
	long long nb;

	nb = n;
	i = 0;	
	if (!(str = (char*)malloc(sizeof(char) * digits(nb))))
		return (NULL);
	if (nb == 0)
		str[i] = '0';
	if (nb < 0)
	{
		str[i] = '-';
		neg = 1;
		nb = -nb;
		i++;
	}
	while (nb != 0)
	{
		str[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	if (neg == 1)
		ft_strrev(str + 1);
	else
		ft_strrev(str);
	return (str);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		char *str;
		printf("%s", str = ft_itoa(atoi(av[1])));
		free(str);
	}
	return (0);
}
