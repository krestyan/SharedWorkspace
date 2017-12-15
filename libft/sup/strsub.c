#include "../includes/libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *part;
    unsigned int i;

	if(!s)
		return (NULL);
    i = 0;
    part = ft_memalloc(len + 1);
	if(!part)
		return (NULL);
    if ((start + len) <= ft_strlen(s))
	{
        while(i < len)
        {
            part[i] = s[start];
            start++;
            i++;
        }
		return part;
	}
    else
        return NULL;
}
