#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	size_t	i;

	i = 0;
	if (s)
	{
		if ((res = ft_strnew(ft_strlen(s))))
		{
			while (i < ft_strlen(s))
			{
				res[i] = f(s[i]);
				i++;
			}
			return (res);
		}
	}
	return (NULL);
}
