/*
Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.

*/
#include <stdio.h>

int max(int *tab, unsigned int len)
{
    int i;
    int max;
    
    i = 0;
    max = tab[0];
    while (i < len)
    {   
        if(max < tab[i])
            max = tab[i];
        i++;
    }
    return (max);
}

int     main()
{
    int len = 8;
    int tab[] = {-1, -2, -3, -12, -356, -68, -2, -6};
    printf("%d", max(tab, len));
}