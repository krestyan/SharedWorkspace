#include "../includes/libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *,size_t))
{
    t_list *crawl;
    t_list *next;
    
    crawl = *alst;
    while(crawl)
    {
        next = crawl->next;
        ft_lstdelone(&crawl, del);
        crawl = next;
    }
	*alst = NULL;
}

/*
void    ft_lstdel(t_list *alst, void (del)(void *, size_t))
{
    t_list    next;

    while (alst)
    {
        next = (*alst)->next;
        ft_lstdelone(alst, del);
        *alst = next;
    }
}
*/
