#include "../includes/libft.h"

void    ft_putstr(char const *s)
{
    int i;

	if(!s)
		return ;
    i = 0;
    while(s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
}
