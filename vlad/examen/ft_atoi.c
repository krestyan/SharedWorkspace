#include <stdio.h>

int     ft_atoi(char *str)
{
    int i;
    int sign;
    int ans;

    ans = 0;
    i = 0;
    sign = 0;
    while (str[i] == '\t' || str[i] == '\v' || str[i] == '\r' ||
        str[i] == ' ' || str[i] == '\f' || str[i] == '\n')
        i++;
    if (str[i] == '-')
        sign = 1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        ans = ans * 10 + (str[i] - '0');
        i++;
    }
    if (sign == 1)
        return (-ans);
    else
        return (ans);
}

int main(void)
{
    char *str = " \t \n - 456";

    printf("%i", ft_atoi(str));
}

