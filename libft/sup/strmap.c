#include "../includes/libft.h"

char * ft_strmap(char const *s, char (*f)(char))
{
    unsigned int i;
    char *r;
    size_t len;
    
	if(!s || !f)
		return (NULL);
    i = 0;
    len = ft_strlen(s);
    r = ft_memalloc(len + 1);
	if(!r)
		return (NULL);
    while (i < len)
    {
        r[i] = f(s[i]);
        i++;
    }
    return (r);
}
