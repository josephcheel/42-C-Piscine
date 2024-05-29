#include <unistd.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (!range)
		return (-1);
	if (min >= max)
		return (-1);
	*range = malloc(sizeof(int) * (max - min + 1));
	if (!*range)
		return (-1);
	while (min <= max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	(*range)[i] = 0;
	return (i);
}