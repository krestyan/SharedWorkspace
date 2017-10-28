/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.
*/

int	ft_atoi(const char *str)
{
    int output;
    char sign;

    output = 0;
    sign = '+';
    while (*str < 33 || *str == 127)
        str++;
    if (*str == '-')
        sign = '-';
    if (*str == '-' || *str == '+')
        str++;
    while (*str >= '0' && *str <= '9' && *str)
    {
        output = output * 10 + *str - '0';
        str++;
    }
    if (sign == '-')
        return (-output);
    else
        return (output);
}