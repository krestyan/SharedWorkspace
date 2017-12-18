#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	x;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)s;
	x = (unsigned char)c;
	while (i < n)
	{
		if (*d == x)
			return (d);
		i++;
		d++;
	}
	return (NULL);
}
