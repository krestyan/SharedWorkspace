#include "ft_list.h"

#include <stdlib.h>
#include <stdio.h>

t_list      *ft_list_push_params(int ac, char **av)
{
    int index;
    t_list  *output;

    output = NULL;
    index = 1;

    printf("Ok\n");


    while(index < ac)
    {
        printf("Copying: %s\n", av[index]);
        ft_list_push_front(&output, &av[index++]);
    }
    return (output);
}