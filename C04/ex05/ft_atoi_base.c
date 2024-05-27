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

int char_in_base(char c, char *base)
{
    int i = 0;

    while (base[i])
    {
        if (base[i] == c)
            return (i);
        i++;
    }
    return (-1);
}

int ft_atoi_base(char *str, char *base)
{
	int size;
	int negative;
	int result;
	int index;

	negative = 1;
	result = 0;
	size = ft_strlen(base);
	if (size < 2)
		return (0);
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative = -1;
		str++;
	}
	while ((index = char_in_base(*str, base)) != -1)
	{
		result = result * size + index;
		str++;
	}
	
	return (result * negative);
}