#include "../includes/libft.h"

void *ft_memset(void * ptr, int value, size_t num)
{
    if(num)
    {
        char *d = ptr;
        *d++ = value;
        while(num >= 0)
        {
            *d++ = value;
            num--;
        }
    }
    return ptr;
}