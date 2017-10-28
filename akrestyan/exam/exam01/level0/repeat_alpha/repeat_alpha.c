/*
Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.
*/

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void repeat_letter(char c, int i)
{
    while (i-- >= 0)
        ft_putchar(c);
}

void repeat_alpha(char *str)
{
    int i = 0;
    int n;

    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            n = str[i] - 'a';
            repeat_letter(str[i], n);
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            n = str[i] - 'A';
            repeat_letter(str[i], n);
        }
        else
            ft_putchar(str[i]);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        repeat_alpha(av[1]);
    }
    ft_putchar('\n');

}