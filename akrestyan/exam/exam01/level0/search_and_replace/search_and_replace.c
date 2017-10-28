/*

Assignment name  : search_and_replace
Expected files   : search_and_replace.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program called search_and_replace that takes 3 arguments, the first
arguments is a string in which to replace a letter (2nd argument) by
another one (3rd argument).

If the number of arguments is not 3, just display a newline.

If the second argument is not contained in the first one (the string)
then the program simply rewrites the string followed by a newline.
*/

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_strlen(char *str)
{
    int length;

    length = 0;
    while (str[length])
        length++;
    return (length);
}

void    search_and_replace(char *str, char orig, char replace)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == orig)
            ft_putchar(replace);
        else
            ft_putchar(str[i]);
        i++;
    }
}

int     main(int ac, char **av)
{
    if (ac == 4 && ft_strlen(av[2]) && ft_strlen(av[3]))
    {
        search_and_replace(av[1], av[2][0], av[3][0]);
    }
    ft_putchar('\n');
}