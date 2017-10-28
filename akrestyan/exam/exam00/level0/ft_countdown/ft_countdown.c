/*
Assignment name  : ft_countdown
Expected files   : ft_countdown.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays all digits in descending order, followed by a
newline.
*/

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    char nb;

    nb = '9';
    while (nb >= '0')
        ft_putchar(nb--);
    ft_putchar('\n');
}