#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *res;

	res = (char *)ft_memalloc(size + 1);
	return (res);
}
