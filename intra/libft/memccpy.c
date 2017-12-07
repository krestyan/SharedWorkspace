#include <stdio.h>

//void *memccpy(void *dest, const void *src, int c, size_t n)
void *ft_memccpy(void *dest, const void *src, int c, size_t len)
{
  char *d = dest;
  const char *s = src;

  while (len-- && *s != c)
    *d++ = *s++;
  return dest;
}