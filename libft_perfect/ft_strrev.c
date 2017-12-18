#include "libft.h"

char		*ft_strrev(char *s)
{
	int		i;
	int		l;
	char	temp;

	i = 0;
	l = 0;
	while (s[l])
		l++;
	while (i < l / 2)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
		i++;
		l--;
	}
	return (s);
}
