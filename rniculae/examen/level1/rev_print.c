#include <stdio.h> // Allowed functions: write -> <unistd.h> putstr

void    rev_print(char *str)
{
    int index;
    int size;

    index = 0;
    size = 0;
    while(str[size] != '\0')
        size++;

    size -= 1;
    while(size >= 0)
    {
        printf("%c", str[size]);
        size--;
    }
}

int main(int arg_v, char **arg_c)
{
    if (arg_v != 2)
    {
        printf("\n");
        return (0);
    }
    rev_print(arg_c[1]);
    return (0);
}

/*
Exercitiu : rev_print
Fisiere de iesire   : rev_print.c
Functii autorizate : write
--------------------------------------------------------------------------------

Scrieti un program care primeste un sir de caractere si afiseaza sirul de
caractere inversat, urmat de '\n'.
Daca numarul parametrilor e diferit de 1, programul afiseaza '\n'.

Exemple:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$
*/