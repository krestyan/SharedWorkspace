#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*res;
	size_t	len;
	size_t	i;

	if (s)
	{
		i = 0;
		while (WHITESP(s[i]))
			i++;
		len = ft_strlen(s) - 1;
		while (len > i && WHITESP(s[len]))
			len--;
		if (len < i)
			return (res = ft_strdup(""));
		if ((res = ft_strsub(s, i, len - i + 1)))
			return (res);
	}
	return (NULL);
}
