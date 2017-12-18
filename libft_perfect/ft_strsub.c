#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (!s)
		return (NULL);
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	res = (char *)ft_memcpy(res, (s + start), len);
	res[len] = '\0';
	return (res);
}
