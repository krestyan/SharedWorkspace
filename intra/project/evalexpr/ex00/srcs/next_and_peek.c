#include "eval_expr.h"

char peek()
{
    return *g_expressionToParse;
}

char next()
{
    return *g_expressionToParse++;
}