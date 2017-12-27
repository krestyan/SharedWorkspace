#include "includes/libft.h"

#include <stdio.h>
int     main()
{
    char const s1[] = "This is great!";
    char const s2[] = "great";
    char *out;

    out = ft_strnstr(s1, s2, 7);
    printf("%s\n", out);
    out = (char*)strnstr(s1,s2, 7);
    printf("%s\n", out);
	/*char const s1[] = "    Gigel are mere      ";
    t_list list;


    list = ft_lstnew((void const*)s1, 5);
    void *s2 = list->content;
    printf("==============\n= STRING ORG =\n==============\ns1:(%s)\n\n",(char *)s2);

	printf("==============\n= ft_strsplit =\n==============\n");
	int i = 0;
	while(i < 3)
	{
	    printf("%s\n", s3[i]);
	    i++;
	}*/
    return 0;
}