/*
Assignment name  : ulstr
Expected files   : ulstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and reverses the case of all its letters.
Other characters remain unchanged.

You must display the result followed by a '\n'.

If the number of arguments is not 1, the program displays '\n'.
*/

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ulstr(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
            ft_putchar(*str - 32);
        else if (*str >= 'A' && *str <= 'Z')
            ft_putchar(*str + 32);
        else
            ft_putchar(*str);
        str++;
    }
}

int     main(int ac, char **av)
{
    if (ac == 2)
    {
        ulstr(av[1]);
    }
    ft_putchar('\n');
}