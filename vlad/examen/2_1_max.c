#include <stdio.h>

int     ft_strlen(int *str)
{
    unsigned int size;

    size = 0;
    while (str[size] || str[size + 1])
    {
        size++;
    }
    return (size);
}

int		max(int *tab, unsigned int len)
{
    int max;
    int i;

    i = 0;
    max = tab[i];
    printf("looking for max..\n");
    while(i < len)
    {
        if (max < tab[i])
            max = tab[i];
        i++;
    }
    printf("max = %i\n", max);
    return (max);
}

int     main(void)
{
    int str1[20] = {-3, -5, -21, -9, -1, 2, -11};
    int m;

    max(str1, ft_strlen(str1));
    //printf("max = %i", m);
}


/*Write the following function:


int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.*/