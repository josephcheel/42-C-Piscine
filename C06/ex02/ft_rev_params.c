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
	int arg;

	arg = ac - 1;
	while (arg > 0)
	{
		ft_putstr(av[arg]);
		write(1, "\n", 1);
		arg--;
	}
}