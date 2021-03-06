#include <stdio.h> // Allowed functions: write, exit -> <unistd.h> putstr

#define putstr printf

int main(int arg_c, char **arg_v)
{
    if (arg_c != 4 || arg_v[3][1] != '\0' || arg_v[2][1] != '\0' )
    {
        putstr("\n");
        return;
    }
    int i = 0;
    int k = 0;

    while(arg_v[1][i])
    {
        if (arg_v[1][i] == arg_v[2][0])
            arg_v[1][i]  = arg_v[3][0];
        i++;
    }
    putstr("%s\n", arg_v[1]);
    return (0);
}

/*
Assignment name  : search_and_replace
Expected files   : search_and_replace.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Scrieti un program numit search_and_replace care primeste 3 argumente,
unde primul argument este un sir de caracter in care trebuie inlocuita o litera
(al 2-lea argument) cu o alta litera (al 3-lea argument).

Daca numarul de argumente nu este 3, atunci afisati un rand nou.

Daca al 2-lea argument nu este continut in primul argument (in sirul de caractere),
atunci programul afiseaza sirul de caractere urmat de o linie noua.

Examples:
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $

*/