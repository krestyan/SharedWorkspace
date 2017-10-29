#include "eval_expr.h"

char	*delete_spaces(char *str)
{
	int		str_chars;
	char	*copy;
	char	*out;
	int		i;

	str_chars = 0;
	copy = str;
	while (*copy)
	{
		if (*str != ' ')
			str_chars++;
		copy++;
	}
	out = malloc(str_chars * sizeof(char));
	copy = out;
	i = 0;
	while (*str)
	{
		if (*str != ' ')
			out[i++] = *str;
		str++;
	}
	return (out);
}
