#include <unistd.h>

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

int ft_atoi(char *str)
{
	int size;
	int negative;
	int result;

	result = 0;
	size = ft_strlen(str);
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	result *= negative;
	return (result);
}