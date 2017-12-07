#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	search_and_replace(char *str, char s, char r)
{
	while (*str)
	{
		if (*str == s)
			ft_putchar(r);
		else
			ft_putchar(*str);
		str++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 4 && av[2][1] == '\0' && av[3][1] == '\0')
		search_and_replace(av[1], av[2][0], av[3][0]);
	ft_putchar('\n');
}