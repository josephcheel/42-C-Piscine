#include <unistd.h>

int ft_is_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	
	i = nb - 1;
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	while (i >= 0)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (2);
}
