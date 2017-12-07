
void    ft_putchar(char c);

void    ft_putnbr(int nb)
{
    long long a;

    a = nb;
    if (a < 0)
    {
        ft_putchar('-');
        a = -a;
    }
    if (a <= 9)
    {
        ft_putchar(a + '0');
    }
    if (a >= 10)
    {
        ft_putnbr(a / 10);
        ft_putchar(a % 10 + '0');
    }
}