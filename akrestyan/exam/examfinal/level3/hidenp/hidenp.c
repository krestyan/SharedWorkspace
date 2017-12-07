#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    hidenp(char *s1, char *s2)
{
    while (*s2)
    {
        if (*s1 == *s2 && *s1)
        {
            s1++;
        }
        s2++;
    }
    if (*s1 == 0)
        ft_putchar('1');
    else
        ft_putchar('0');
}

int main(int ac, char **av)
{
    if (ac == 3)
        hidenp(av[1], av[2]);
    ft_putchar('\n');
}