#include "eval_expr.h"

int number()
{
    int result = next() - '0';
    while (peek() >= '0' && peek() <= '9')
    {
        result = 10*result + next() - '0';
    }
    return result;
}

int factor()
{
    if (peek() >= '0' && peek() <= '9')
        return number();
    else if (peek() == '(')
    {
        next();
        int result = expression();
        next();
        return result;
    }
    else if (peek() == '-')
    {
        next();
        return -factor();
    }
    return 0;
}

int term()
{
    int result = factor();
    while (peek() == '*' || peek() == '/' || peek() == '%')
    {
    	char current = next();
        if (current == '*')
            result *= factor();
        else if (current == '/')
            result /= factor();
        else
            result %= factor();
    }
    return result;
}

int expression()
{
    int result = term();
    while (peek() == '+' || peek() == '-')
        if (next() == '+')
            result += term();
        else
            result -= term();
    return result;
}

int     eval_expr(char *str)
{

    g_expressionToParse = delete_spaces(str);
    return (expression());
}