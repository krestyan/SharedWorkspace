/*
Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.
*/

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    rev_print(char *str)
{
    int length;

    length = 0;
    while (str[length + 1] != 0)
        length++;
    while (length >= 0)
        ft_putchar(str[length--]);
}

int     main(int ac, char **av)
{
    if (ac == 2)
    {
        rev_print(av[1]);
    }
    ft_putchar('\n');
}