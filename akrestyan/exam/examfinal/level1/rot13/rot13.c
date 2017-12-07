#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot13(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			ft_putchar(((*str - 'a') + 13) % 26 + 'a');
		else if (*str >= 'A' && *str <= 'Z')
			ft_putchar(((*str - 'A') + 13) % 26 + 'A');
		else
			ft_putchar(*str);
		str++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		rot13(av[1]);
	ft_putchar('\n');
}