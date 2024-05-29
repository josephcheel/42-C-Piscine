 #include <unistd.h>

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

int ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (i < ft_strlen(s1) && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i !=  ft_strlen(s1))
		return (s1[i] - s2[i]);
	return (0);
}

void ft_putstr(char *str)
{
	int i;
	i = 0;
	if (!str)
		return ;
	while (str[i])
		write(1, &str[i++], 1);
}

void swap(char **a, char **b)
{
	char *temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int ac, char **av)
{
	int i;
	
	i = 1;
	while (i < ac)
	{
		int j = 0;
		while (j < ac - i)
		{
			if (ft_strcmp(av[j], av[j+1]) > 0)
				swap(&av[j], &av[j+1]);
			j++;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	int arg;

	arg = 1;
	sort(ac, av);
	while (arg < ac)
	{
		ft_putstr(av[arg]);
		write(1, "\n", 1);
		arg++;
	}
}