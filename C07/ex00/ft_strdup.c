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

char *ft_strdup(char *src)
{
	char *str;

	str = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!str)
		return (NULL);
	return (str);
}