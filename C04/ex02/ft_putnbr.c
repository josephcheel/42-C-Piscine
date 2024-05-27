#include <unistd.h>

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb > 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		write(1, &(char){nb + '0'}, 1);
}