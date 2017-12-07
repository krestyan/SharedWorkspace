#include <stdio.h>

int		max(int* tab, unsigned int len);

int     main()
{
    int len = 12;
    int tab[] = {1,2,3, 12, 4,5,16,7,8,9,10,11};

    printf("%d",    max(tab, len));
}