/*
Assignment name  : maff_alpha
Expected files   : maff_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet, with even letters in uppercase, and
odd letters in lowercase, followed by a newline.
*/

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    char i;

    i = 0;
    while (i < 26)
    {
        if (i % 2 == 1)
            ft_putchar(i + 'A');
        else
            ft_putchar(i + 'a');
        i++;
    }
    ft_putchar('\n');
}