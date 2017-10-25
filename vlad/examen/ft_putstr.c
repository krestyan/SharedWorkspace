#include <stdio.h>
#include <unistd.h>

// OK :D

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

int     main(void)
{
    char *str1 = "adas 23234";
    ft_putstr(str1);
    return (0);
}