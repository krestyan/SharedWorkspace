/*
Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
*/

#include <stdio.h>

char    *ft_strrev(char *str)
{
    int len = 0;
    int i = -1;
    char tmp;
    while (str[len])
    {
        len++;
    }
    while (++i < --len)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
    }
    return (str);
}

int     main()
{
    char c[]= "Raul e un poet";
    printf("%s", ft_strrev(c));
    return (0);
}