#include <stdio.h> // Allowed functions: write -> <unistd.h> putstr

int main(int arg_v, char **arg_c)
{
    int i;
    int size;
    int repet;
    repet = 0;
    size = 0;
    i = 0;

    if (arg_v != 2)
    {
        printf("\n");
        return(0);
    }
    while(arg_c[1][size])
        size++;
    while(i <= size)
    {
        if(arg_c[1][i] >= 'a' && arg_c[1][i] <= 'z')
            repet = (26 - ('z' - arg_c[1][i]));
        else if (arg_c[1][i] >= 'A' && arg_c[1][i] <= 'Z')
            repet = (26 - ('Z' - arg_c[1][i]));
        else
            repet = 0;
        while(repet > 0)
        {
            printf("%c", arg_c[1][i]);
            repet--;
        }
        i++;
    }
    printf("\n");
    return (0);
}

/*
Exercitiu  : repeat_alpha
Fisiere de iesire  : repeat_alpha.c
Functii autorizate : write
----------------------------------------------

Scrieti un program numit repeat_alpha care primeste
un sir de caractere si il afiseaza repetand fiecare
caracter alfabetic de atatea ori cat indexul sau
alfabetic, urmat de un '\n'.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Majusculele raman neschimbate.

Daca numarul de argumente nu e 1, programul afiseaza '\n'.

Exemple:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
*/