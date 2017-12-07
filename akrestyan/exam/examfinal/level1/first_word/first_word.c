#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void first_word(char *str)
{
	while (*str < 33 || *str == 127)
		str++;
	while (*str > 32 && *str != 127)
	{
		ft_putchar(*str);
		str++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		first_word(av[1]);
	}
	ft_putchar('\n');
}