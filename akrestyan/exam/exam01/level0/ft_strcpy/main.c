#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2);

int main()
{
    char *src = " this is the original";
    char dest[5];
    char *cpy;

    cpy = ft_strcpy(dest, src);
    printf("%s\n", cpy);
}