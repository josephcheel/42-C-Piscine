#include <unistd.h>
#include <stdlib.h>

size_t ft_strlen(char *str)
{
	size_t i;

	i = 0;
	if (!str)
		return (i);
	while (str[i])
		i++;
	return (i);
}

size_t ft_arrlen(char **arr)
{
	size_t i;

	i = 0;
	if (!arr)
		return (i);
	while (arr[i])
		i++;
	return (i);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char *res;
	size_t sizeArr = ft_arrlen(strs);
	if (size <= 0 || sizeArr > size)
		return (malloc(0));

	size_t sizeRes = 0;
	for (int i = 0; i < size; i++)
		sizeRes += ft_strlen(strs[i]);
	res = malloc(sizeof(char) * (sizeRes + (ft_strlen(sep) * (size - 1)) + 1));
	if (!res)
		return (NULL);
	int x = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; strs[i][j]; j++)
		{
			res[x] = strs[i][j];
			x++;
		}
		if (i < size - 1)
		{
			for (int j = 0; sep[j]; j++)
			{
				res[x] = sep[j];
				x++;
			}
		}
	}
	res[x] = '\0';
	return (res);
}
