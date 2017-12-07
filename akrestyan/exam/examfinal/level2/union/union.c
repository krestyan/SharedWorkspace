#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     check(char *str, char c, int nb)
{
    int i = 0;
    while (str[i] && (i < nb || nb == -1))
    {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

void    union_ex(char *s1, char *s2)
{
    int i = 0;
    while(s1[i])
    {
        if (!check(s1, s1[i], i) && check(s2, s1[i], -1))
            ft_putchar(s1[i]);
        i++;
    }
    i = 0;
    while(s2[i])
    {
        if (!check(s1, s2[i], -1) && !check(s2, s2[i], i))
            ft_putchar(s2[i]);
        i++;
    }
}

int     main(int argc, char **argv)
{
    if (argc == 3)
        union_ex(argv[1], argv[2]);
    ft_putchar('\n');
}