#include "ft_list.h"
#include <stdio.h>

void ft_list_push_back(t_list **begin_list, void *data);
void    ft_list_push_front(t_list **begin_list, void *data);
int     ft_list_size(t_list *begin_list);
t_list  *ft_list_last(t_list *begin_list);
t_list      *ft_list_push_params(int ac, char **av);
void    ft_list_clear(t_list **begin_list);
t_list  *ft_list_at(t_list  *begin_list, unsigned int nbr);


int main(int ac, char **av)
{
    char *i[] = {"42", "asd", "123"};
    t_list *list;
    t_list *crawl;

    list = NULL;
    list = ft_list_push_params(ac, av);
    /*int counter = 0;
    while (counter < 3)
        ft_list_push_front(&list, &i[counter++]);*/



    //print list's elements
    crawl = list;
    char **n = crawl->data;
    while (crawl)
    {
        n = crawl->data;
        printf("%s\n", *n);
        crawl = crawl->next;
    }
    //print list size
    printf("List size: %d\n", ft_list_size(list));

    //print last element's data
    crawl = ft_list_last(list);
    n = crawl->data;
    printf("List last: %s\n", *n);

    unsigned int o = 2;
    crawl = ft_list_at(list, o);
    n = crawl->data;
    printf("%s\n", *n);

    ft_list_clear(&list);

    return (0);
}