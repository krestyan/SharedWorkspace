#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	size_t i;
	size_t j;

	i = 0;
	j = -1;
	while (dest[i])
		i++;
	while (src[++j] && (j < nb))
		dest[i++] = src[j];
	dest[i] = '\0';
	return (dest);
}
