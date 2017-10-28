#include <stdio.h>

int main(int arg_c, char **arg_v)
{
    int     i;
    int     j;
    char    *str;

    i = 0;
    str = arg_v[1];

    while(str[i])
    {
        if (str[i] < 33 && str[i + 1] >= 33 && str[i + 1] <= 127)
            j = i +1;
        i++;
    }

    while(str[j] >= 33 && str[j] <= 126)
        printf("%c", str[j]), j++;
    return(0);
}

/*
Scrieti un program ce ia ca parametru un sir de caractere si care afiseaza ultimul
cuvant al acestui sir urmat de '\n'.

Numim "cuvant" o portiune a sirului de caractere delimitat fie de spatii si/sau
tabulatoare, fie de incepulul ori sfarsitul sirului.

Daca numarul de parametri transmis este diferit de 1, sau nu exista nicun cuvant
de afisat, programul va afisa '\n'.

Exemple:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/