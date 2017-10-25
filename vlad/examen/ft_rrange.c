#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int     ft_rrange(int start, int end)
{
    int size;
    int *rez;
    int i;

    i = 0;
    size = (end - start);
    printf("checking size sign");
    if (size < 0)
        size = -(size);
    printf("alocating memory..");
    rez = (int *)malloc((size + 1) * sizeof(*rez));
    while (i <= size)
    {
        if (end > start)
        {
            rez[i] = end;
            end--;
        }
        else
        {
            rez[i] = end;
            end++;
        }
        i++;
    }
    rez[i] = 0;
    return (*rez);
}

int     main(void)
{

    ft_rrange(3, -3);
}
