#include <unistd.h>

int ft_iterative_factorial(int nb)
{
	int result;

	if (nb < 0)
		return (0);
	while (nb)
	{
		result *= nb;
		nb -= 1;
	}
	return (result);
}