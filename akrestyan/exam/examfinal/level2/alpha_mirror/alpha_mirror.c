#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	alpha_mirror(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			ft_putchar('z' - *str + 'a');
		else if (*str >= 'A' && *str <= 'Z')
			ft_putchar('Z' - *str + 'A');
		else
			ft_putchar(*str);
		str++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		alpha_mirror(av[1]);
	ft_putchar('\n');
}