#include "libft.h"

void	ft_putendl(char const *s)
{
	char *str;

	str = (char *)s;
	ft_putstr(str);
	ft_putchar('\n');
}
