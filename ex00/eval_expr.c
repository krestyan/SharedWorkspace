#include "eval_expr.h"

int		number(void)
{
	int result;

	result = next() - '0';
	while (peek() >= '0' && peek() <= '9')
	{
		result = 10 * result + next() - '0';
	}
	return (result);
}

int		factor(void)
{
	int result;

	if (peek() >= '0' && peek() <= '9')
		return (number());
	else if (peek() == '(')
	{
		next();
		result = expression();
		next();
		return (result);
	}
	else if (peek() == '-')
	{
		next();
		return (-factor());
	}
	return (0);
}

int		term(void)
{
	int		result;
	char	current;

	result = factor();
	while (peek() == '*' || peek() == '/' || peek() == '%')
	{
		current = next();
		if (current == '*')
			result *= factor();
		else if (current == '/')
			result /= factor();
		else
			result %= factor();
	}
	return (result);
}

int		expression(void)
{
	int result;

	result = term();
	while (peek() == '+' || peek() == '-')
		if (next() == '+')
			result += term();
		else
			result -= term();
	return (result);
}

int		eval_expr(char *str)
{
	g_expressiontoparse = delete_spaces(str);
	return (expression());
}
