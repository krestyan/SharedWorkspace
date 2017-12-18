#include "libft.h"

size_t		ft_strlen(const char *s)
{
	int res;

	res = 0;
	while (!(*s == '\0'))
	{
		s++;
		res++;
	}
	return (res);
}
