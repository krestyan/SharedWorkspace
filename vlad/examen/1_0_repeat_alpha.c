#include <unistd.h>
#include <stdio.h>

int main(int ar, char **av)
{
	int	i;
	int j;

	i = 0;
	if (ar != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][i])
	{
		j = 0;
		if (av[1][i] >= 'a' && av[1][i] <= 'z')
		{
			j = av[1][i] - 'a';
		}
		else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
		{
			j = av[1][i] - 'A';
		}
		while (j >= 0)
		{
			write(1, &av[1][i], 1);
			j--;
		}
		i++;
	}
}