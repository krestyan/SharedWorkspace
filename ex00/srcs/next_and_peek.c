#include "eval_expr.h"

char	peek(void)
{
	return (*g_expressiontoparse);
}

char	next(void)
{
	return (*g_expressiontoparse++);
}
