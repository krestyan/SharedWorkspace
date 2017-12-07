#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *g_expressionToParse;

void    ft_putnbr(int nb);
void    ft_putchar(char c);
int     eval_expr(char *str);
int		expression();
char  *delete_spaces(char *str);
char next();
char peek();

#endif