/*
Exercitiu : aff_a
Fisiere de iesire : aff_a.c
Functii autorizate : write
--------------------------------------------------------------------------------

Scrieti un program ce ia ca parametru un sir de caractere, si care afiseaza la
iesirea standard primul caracter 'a' intalnit in acest sir, urmat de '\n'. Daca
nu este intalnit niciun caracter 'a', programul va afisa '\n'. Daca numarul de
parametri este diferit de 1, programul va afisa 'a' urmat de '\n'.
*/

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_a(char *str)
{
    int print;

    print = 0;
    while (*str)
    {
        if (!print && *str == 'a')
        {
            ft_putchar(*str);
            print++;
        }
        str++;
    }
}

int     main(int ac, char **av)
{
    if (ac == 2)
    {
        ft_print_a(av[1]);
    }
    else
        ft_putchar('a');
    ft_putchar('\n');
}