#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	x;
	size_t	i;
	char	*d;

	d = (char *)s;
	x = (char)c;
	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == x)
			return (d);
		i++;
		d++;
	}
	return (NULL);
}
