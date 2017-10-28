#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int a;
    int b;
    int rez;

    a = atoi(argv[1]);
    b = atoi(argv[3]);

    if (*argv[2] == '+')
        rez = a + b;
    if (*argv[2] == '-')
        rez = a - b;
    if (*argv[2] == '/')
        rez = a / b;
    if (*argv[2] == '*')
        rez = a * b;
    if (*argv[2] == '%')
        rez = a % b;
    printf("rez = %i", rez);
}