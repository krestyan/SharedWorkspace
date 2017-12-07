#include <stdio.h>
#include <stdlib.h>

int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

void    pgcd(int a, int b)
{
    int i = 1;
    int output = 1;
    while (i <= min(a, b))
    {
        if (a % i == 0 && b % i == 0)
            output = i;
        i++;
    }
    printf("%d", output);
}

int     main(int ac, char **av)
{
    if (ac == 3)
        pgcd(atoi(av[1]), atoi(av[2]));
    printf("\n");
}