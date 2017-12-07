#include <unistd.h>

void	ft_char(char c)
{
	write(1, &c, 1);
}

void	epur_str(char *str)
{
	int i = 0;
	int sv = 0;
	while (str[i] < 33)
	{
		i++;
	}
	sv = i;
	while(str[i])
	{
		if (str[i] == ' ' && (str[i + 1] >= 33 && str[i + 1] <= 126))
			ft_char(str[i]);
		if ((str[i] >= 33 && str[i] <= 126))
			ft_char(str[i]);
		i++;
	}
	ft_char('\n');
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		ft_char('\n');
	else
	{
		epur_str(argv[1]);
	}
	return (0);
}