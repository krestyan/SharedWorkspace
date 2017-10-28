/*
Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.
*/

#include <unistd.h>

#define NUMBER 13

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    rot13(char *str)
{
    while(*str)
    {
        if (*str >= 'a' && *str <= 'z')
            ft_putchar((((*str - 'a') + NUMBER) % 26) + 'a');
        else if (*str >= 'A' && *str <= 'Z')
            ft_putchar((((*str - 'A') + NUMBER) % 26) + 'A');
        else
            ft_putchar(*str);
        str++;
    }
}

int     main(int ac, char **av)
{
    if (ac == 2)
    {
        rot13(av[1]);
    }
    ft_putchar('\n');
}