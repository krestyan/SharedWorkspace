#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        printf("copiez pozitia %i\n", i);
        i++;
    }
    s1[i] = s2[i];
    return (0);
}

int     main(void)
{
    char str1[] = "abc";
    char str2[3];
    ft_strcpy(str2, str1);
    printf("str2 = %s", str2);
    printf("\n");
}

// Ddasadadad