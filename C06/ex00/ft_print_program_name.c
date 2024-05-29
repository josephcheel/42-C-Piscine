#include <unistd.h>

void ft_putstr(char *str)
{
	int i;
	i = 0;
	if (!str)
		return ;
	while (str[i])
		write(1, &str[i++], 1);
}

int main(int ac, char **av)
{
	ft_putstr(av[0]);
	write(1, "\n", 1);
}