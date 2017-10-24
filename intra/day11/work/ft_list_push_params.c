#include "ft_list.h"

#include <stdlib.h>

t_list      *ft_list_push_params(int ac, char **av)
{
    int index;
    t_list  *output;

    output = NULL;
    index = 1;
    while(index < ac)
    {
        ft_list_push_front(&output, atoi(av[index++]));
    }
    return (output);
}