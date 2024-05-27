#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (i);
	while (str[i])
		i++;
	return (i);
}

void ft_putnbr_base(int nbr, char *base)
{
	int base_size;

	base_size = ft_strlen(base);
	if (base_size == 0)
		return ;
	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	if (nbr >= base_size)
	{
		ft_putnbr_base(nbr / base_size, base);
		ft_putnbr_base(nbr % base_size, base);
	}
	else
		write(1, &(char){base[nbr]}, 1);
}

int main(int ac, char **av)
{
	if (ac == 3)
		ft_putnbr_base(atoi(av[1]), av[2]);
	write(1, "\n", 1);
}