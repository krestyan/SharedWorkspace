#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     check(char *str, char c, int nb)
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