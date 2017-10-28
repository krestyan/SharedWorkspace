#define Jump(x) (x == ' ' || x == '\n' || x == '\t')
#define Go(x) (x != ' ' && x != '\n' & x != '\t')

#include <stdio.h>
#define write(x) printf("%c", x);

int main(int arg_c, char **arg_v)
{
    char *str;
    int i = 0;

    str = arg_v[1];

    while(str[i] && Jump(str[i]))
        i++;

    while(str[i] && Go(str[i]))
    {
        write(str[i]);
        i++;
    }

    return (0);
}