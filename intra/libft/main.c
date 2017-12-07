#include <stdio.h>
#include <string.h>

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n);


int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = memcmp(str1, str2, 5);
   
   printf("ret: %d\n", memcmp(str1, str2, 5));

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}