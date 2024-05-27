#include <unistd.h>

int ft_sqrt(int nb)
{
	int result;

	result = 0;
	for (int i = 0; i <= nb; i++)
	{
		result = i * i;
		if (result == nb)
			return (i);
		else if (result > nb)
			return (0);
	}
	return (0);
}
