
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int i;
	long long nb;

	i = 0;
	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd("-", fd);
		nb = -nb;
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar_fd(nb + '0', fd);
	}
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}
