
//The  strdup()  function returns a pointer to a new string which is a duplicate of the string s.  Memory for the new string is obtained with m..
#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i;
    int size;
    char *str;

    i = 0;
    size = 0;
    printf("est. size..\n");
    while (src[size])
    {
        size++;
    }
    printf("aloccating mem...\n");
    str = (char *)malloc((size+1) * sizeof(char));
    while (i < size)
    {
        str[i] = src[i];
        i++;
    }
    printf("i = %i\n", i);
    str[i] = 0;
    return (str);
}

int     main(void)
{
    char str1[] = "abcd erf 12 ";
    char *str2;

    //printf("Ok\n");
    str2 = ft_strdup(str1);
    printf("%s\n", str2);
}