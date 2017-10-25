#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct  s_list
{
    struct s_list   *next;
    int            data;
}               t_list;

void    ft_list_push_front(t_list **begin_list, int data);
void    ft_list_push_back(t_list **begin_list, int data);
int     ft_list_size(t_list *begin_list);
t_list  *ft_list_last(t_list *begin_list);
t_list  *ft_create_elem(int data);
t_list *ft_list_push_params(int ac, char **av);
#endif