#include "../includes/libft.h"

int		ft_atoi(const char *str)
{
	int	negative;
	long long	output;

	output = 0;
	negative = 0;
	while (*str == '\n' || *str == '\r' ||
			*str == ' ' || *str == '\v' ||
			*str == '\t' || *str == '\f')
		str++;
	if (*str == '-')
		negative = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9' && *str)
	{
		if (output >= 2147483648 && negative == 1)
			return (0);
		if (output >= 2147483647 && negative == 0)
			return (-1);

		output = output * 10 + (*str - '0');
		str++;
	}
	if (negative)
		return (-output);
	else
		return (output);
}
