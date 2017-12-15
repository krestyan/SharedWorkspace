#include "../includes/libft.h"

int ft_strequ(char const *s1, char const *s2)
{
	int i;

	if(!s1 || !s2)
		return (0);
	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		else
			i++;
	}
	return (1);
}
