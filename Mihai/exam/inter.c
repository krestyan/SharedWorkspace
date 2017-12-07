/*
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.
*/

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     check(char *str, char c, int nb) // cauta sa vada daca ai un caracter pana la un index
{
    int i = 0;
    while ((i < nb || nb == -1) && str[i])
    {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

void    inter(char *s1, char *s2)
{
    int i = 0;
    while (s1[i])
    {
        if (!check(s1, s1[i], i) && check(s2, s1[i], -1))
            ft_putchar(s1[i]);
        i++;
    }
}

int     main(int ac, char **av)
{
    if (ac == 3)
        inter(av[1], av[2]);
    ft_putchar('\n');
}