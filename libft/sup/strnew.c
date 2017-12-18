#include "../includes/libft.h"

char    *ft_strnew(size_t size)
{
    char *output;

	if(size == 0)
		return ("\0");
	else
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
}
