#include "../includes/libft.h"

int		ft_strcmp(char *str1, char *str2)
{
	int i;
	unsigned char* s1;
	unsigned char* s2;

	s1 = (unsigned char*)str1;
	s2 = (unsigned char*)str2;
	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}
