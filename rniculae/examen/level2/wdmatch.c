#include <unistd.h>
void    ft_putchar(char c){     write(1, &c, 1);     }

void    ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

void    wdmatch(char    *s1, char  *s2)
{
    int i = 0;
    int k = 0;
    while(s1[i])
    {
        while(s2[k])
        {
            if (s1[i] == s2[k])
                break;
            k++;
        }
        if (s2[k] == '\0')
            return;
        i++;
    }
    ft_putstr(s1);
    ft_putchar('\n');
}

int     main(int    c, char     **v)
{
    if(c == 3)
    {
        wdmatch(v[1], v[2]);
    }
    else
        ft_putchar('\n');
    return (0);
}

/*
Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
Plain Text
*/