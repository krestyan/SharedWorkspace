#include <unistd.h>

void    inter(char    *s1, char  *s2)
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

int main(int argc, char **argv)
{
    
}
/*
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the characters that appear in both strings, in the order they appear in the first one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$*/