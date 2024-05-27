#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
	int result;

	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	result = 1;
	while (power)
	{
		result *= nb;
		power -= 1;
	}
	return (result);
}