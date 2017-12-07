#include <stdio.h>

void *ft_memset(void * ptr, int value, size_t num)
{
    if(num)
    {
        char *d = ptr;
        *d++ = value;
        while(--num)
        {
            *d++ = value;
        }
    }
    return ptr;
}