#include "ft_list.h"
#include <stdlib.h>

t_list *ft_create_elem(int data)
{
    t_list  *output;

    output = malloc(sizeof(t_list));
    if (output)
    {
        output->data = data;
        output->next = NULL;
    }
	else
		output = NULL;
    return (output);
}
