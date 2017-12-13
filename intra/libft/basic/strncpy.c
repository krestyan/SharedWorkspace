#include "../includes/libft.h"

char *ft_strncpy(char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (s2[i] && i < n)
    {
        s1[i] = s2[i];
        i++;
    }
    return (0);
}