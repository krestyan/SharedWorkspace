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
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int     check(char *str, char c, int len)
{
    int i;

    i = 0;
    while(str[i] && (i < len || len == -1))
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

void    inter(char *str1, char *str2)
{
    int i;

    i = 0;
    while (str1[i])
    {
        if (!check(str1, str1[i], i) && check(str2, str1[i], -1))
        {
            ft_putchar(str1[i]);
        }
        i++;
    }
    ft_putchar('\n');
}



int main(int ar, char **av)
{
    int i, j;


    i = 0;
    if (ar != 3)
        write(1, "\n", 1);
    else
        inter(av[1], av[2]);
    return (0);

}