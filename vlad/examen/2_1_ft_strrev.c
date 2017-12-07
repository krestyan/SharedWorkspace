#include <stdio.h>

int     ft_strlen(char *str)
{
    int len;

    len = 0;
    while(str[len])
    {
        len++;
    }
    return(len);
}

char    *ft_strrev(char *str)
{
    int i;
    char temp;
    int l;

    l = ft_strlen(str);
    l -= 1;
    i = 0;
    while(i < l)
    {
        temp = str[i];
        str[i] = str[l];
        str[l] = temp;
        i++;
        l--;
    }
    return (str);
}

int     main(void)
{
    char c[] = "Notificare albastra";

    ft_strrev(c);

    printf("return = (%s)\n", c);
    return (0);
}

/*Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);*/