#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);
{
    const char* str1;
    const char* str2;
    size_t i;

    str1 = s1;
    str2 = s2;

    i = 0;
    while(i < n && (str1[i] || str2[i]))
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i])
        else
            i++;
    }
}

/*
int		ft_strcmp(char *s1, char *s2)
{
	int i;

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
*/