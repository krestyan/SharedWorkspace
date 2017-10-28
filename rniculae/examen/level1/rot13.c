// a b c d e f g h i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26

#define NUMBER 13
void    rot13(char *str)
{
    int index;

    index = 0;
    while(str[index])
    {
        if (str[index] >= 'a' && str[index] <= 'z')
        {
            str[index] = ((((str[index] - 'a') + NUMBER) % 26) + 'a');
            printf("%c", str[index]);
        }
        else if (str[index] >= 'A' && str[index] <= 'Z')
        {
            str[index] = ((((str[index] - 'A') + NUMBER) % 26) + 'A');
            printf("%c", str[index]);
        }
        else
            printf("%c", str[index]);
        index++;
    }
}
int     main(int arg_c, char **arg_v)
{
    rot13(arg_v[1])
    return (0);
}

/*
Exercitiu  : rot_13
Fisiere de iesire   : rot_13.c
Functii autorizate : write
--------------------------------------------------------------------------------

Scrieti un program care primeste un sir de caractere si il afiseaza, inlocuind
fiecare litera cu litera ce se afla cu 13 spatii dupa in ordine alfabetica.

'z' devine 'm' si 'Z' devine 'M'. Programul este case insensitive.

Rezultatul va fi urmat de '\n'.

Daca numarul parametrilos nu e 1, programul afiseaza '\n'.

Exemple:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>
*/