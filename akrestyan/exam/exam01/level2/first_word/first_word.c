/*
Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.
*/

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    first_word(char *str)
{
    while(*str && (*str < 33 || *str == 127))
        str++;

    while(*str && *str > 32 && *str != 127)
    {
        ft_putchar(*str);
        str++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        first_word(av[1]);
    }
    ft_putchar('\n');
}