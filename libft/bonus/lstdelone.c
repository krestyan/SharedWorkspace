#include "../includes/libft.h"

void    ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
    t_list *crawl;

    crawl = *alst;
    del(crawl->content, crawl->content_size);
	crawl->next = NULL;
    free(*alst);
	*alst = NULL;
	alst = NULL;
}
