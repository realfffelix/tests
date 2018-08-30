
#include "libft.h"

void	ft_putnbr(int n)
{
	int i;
	long long nb;

	i = 0;
	nb = n;
	if (nb < 0)
	{
		ft_putchar("-");
		nb = -nb;
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
