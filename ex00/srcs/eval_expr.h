#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

# include <unistd.h>
# include <stdlib.h>

char	*g_expressiontoparse;
void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		eval_expr(char *str);
int		expression(void);
char	*delete_spaces(char *str);
char	next(void);
char	peek(void);

#endif
