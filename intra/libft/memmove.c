#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t num)
{
    char *d = dest;
    const char *s = src;
    size_t   i = 0;
    char *tmp = malloc(num + 1);
    tmp[num] = '\0';

    while(i < num)
    {
        tmp[i++] = *s++;
    }

    while(*tmp)
        *d++ = *tmp++;
    return dest;
}