#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_check(char *str, char c, int len)
{
	int i;

	i = 0;
	while(str && (i < len || len == -1))
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_union(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i])
	{
		if (!ft_check(str1, str1[i], i) && ft_check(str2, str1[i], -1))
			ft_putchar(str1[i]);
		i++;
	}
	i = 0;
	while (str2[i])
	{
		printf("test1\n");
	if (!ft_check(str1, str2[i], -1) && ft_check(str2, str2[i], i))
			ft_putchar(str2[i]);
		i++;
	}
	ft_putchar('\n');
}

int main(int ar, char **av)
{
	int i;
	int check;

	i = 0;
	if (ar != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_union(av[1], av[2]);
}


/*Write a program that takes two strings and displays, without doubles, the characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$ */