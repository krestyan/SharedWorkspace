#include "libft.h"

int		ft_digitno(int n)
{
	int d;

	d = 0;
	if (n == -2147483647 - 1 || n == 2147483647)
		return (10);
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		d++;
	}
	while (n > 0)
	{
		n = n / 10;
		d++;
	}
	return (d);
}
