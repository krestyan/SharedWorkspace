#include "../includes/libft.h"

void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
    t_list *next;

    if(f == NULL || lst == NULL)
        return ;

    while(lst)
    {
        next = lst->next;
        f(lst);
        lst = next;
    }
}
