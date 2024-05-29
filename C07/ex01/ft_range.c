#include <unistd.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int i;
	int *range;
	
	i = 0;
	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min + 1));
	if (!range)
		return (NULL);

	while (min <= max)
	{
		range[i] = min;
		i++;
		min++;
	}
	range[i] = 0;
	return (range);
}
