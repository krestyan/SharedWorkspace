#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int l;
	int j;

	i = 0;
	l = ft_strlen(to_find);
	j = 0;
	if (l == 0)
		return ((char *)(str));
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (j == l - 1)
				return ((char *)(str + i));
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
