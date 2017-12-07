#include <unistd.h>

void ft_putchar(char c, int num)
{
	while (num-- >= 0)
		write(1, &c, 1);
}

void repeat_alpha(char *str)
{
	while(*str)
	{
		if (*str >= 'a' && *str <= 'z')
			ft_putchar(*str, *str - 'a');
		else if (*str >= 'A' && *str <= 'Z')
			ft_putchar(*str, *str - 'A');
		else
			ft_putchar(*str, 0);
		str++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		repeat_alpha(av[1]);
	ft_putchar('\n', 0);
}