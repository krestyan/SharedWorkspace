#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nbr)
{
    if (nbr >= 10)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else
        ft_putchar(nbr + '0');
}

int     ft_atoi(char *str)
{
    int output = 0;
    char sign = '+';
    while (*str < 33 || *str == 127)
        str++;
    if (*str == '-')
        sign = '-';
    if (*str == '-' || *str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        output = output * 10 + (*str - '0');
        str++;
    }
    if (sign == '-')
        return (-output);
    else
        return output;
}

int     is_prime(int nb)
{
    if (nb == 0 || nb == 1)
        return 0;
    int i = 2;
    while(i < nb)
    {
        if (nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}

void    add_prime_sum(char *str)
{
    int nb = ft_atoi(str);
    int sum = 0;
    int i = 0;
    while (i <= nb)
    {
        if (is_prime(i))
            sum += i;
        i++;
    }
    ft_putnbr(sum);
}

int main(int ac, char **av)
{
    if (ac == 2)
        add_prime_sum(av[1]);
    ft_putchar('\n');
}