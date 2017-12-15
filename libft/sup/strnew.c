#include "../includes/libft.h"

char    *ft_strnew(size_t size)
{
    char *output;
    if(size)
    {
        output = ft_memalloc(size + 1);
		if(!output)
			return (NULL);
        while(size)
        {
            output[size] = 0;
            size--;
        }
        return (output);
    }
    return NULL;
}
