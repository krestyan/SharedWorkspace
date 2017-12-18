#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t l;

	i = 0;
	l = 0;
	while (((size > 0) && (i < size) && (l == 0)))
	{
		if (dst[i] == '\0')
			l = 1;
		i++;
	}
	j = ft_strlen(dst);
	if (l == 0)
		return (size + ft_strlen(src));
	else
	{
		i = -1;
		while (src[++i] != '\0' && i < size - j - 1)
			dst[j + i] = src[i];
		dst[j + i] = '\0';
	}
	return (j + ft_strlen(src));
}
