#include <stdio.h> // Allowed functions: write, exit -> <unistd.h> putstr

#define putstr printf

void    ultstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = ('A' - 1) + 26 - ('z' - str[i]);
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = ('a' - 1) + 26 - ('Z' - str[i]);
        i++;
    }
    putstr("%s\n", str);
}

int main(int arg_c, char **arg_v)
{
    if (arg_c != 2)
    {
        putstr("\n");
        return (0);
    }
    ultstr(arg_v[1]);
    return (0);
}

/*
Exercitiu  : ulstr
Fisiere de iesire   : ulstr.c
Functii autorizate : write
--------------------------------------------------------------------------------

Scrieti un program ce ia ca parametru u sir de caractere si care transforma toate
literele minuscule in majuscule si toate literele majuscule in minuscule. Restul
caracterelor vor ramane nemodificate.

Trebuie sa afisati resultatul urmat de un '\n'.

Daca numarul de parametri transmis este diferit de 1, programul va afisa '\n'.

Exemple:

$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
$>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
$>./ulstr | cat -e
$
*/