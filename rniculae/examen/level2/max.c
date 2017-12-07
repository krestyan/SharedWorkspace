int		max(int* tab, unsigned int len)
{
    int save;
    int i;
    
    save = 0;
    i = 0;
    while(i <= len)
    {
        if (tab[i] > tab[i - 1])
            if (save < tab[i])
                save = tab[i];
        i++;
    }
    return (save);
}

//rimuv dis shit
#include <stdio.h>
int     main()
{
    int len = 11;
    int tab[] = {12,1,2,3,4,5,16,7,8,9,10,11};

    printf("%d",    max(tab, len));
}

/*
Assignment name  : max
Expected files   : max.c
Allowed functions: 
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
*/