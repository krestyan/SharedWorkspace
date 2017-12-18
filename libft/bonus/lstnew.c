#include "../includes/libft.h"
/*
typedef struct  s_list
{
    void *content;
    size_t content_size;
    struct s_list *next;
}               t_list;
*/
t_list  *ft_lstnew(void const *content, size_t content_size)
{
    t_list *new;
	void	*content_new;

    new = malloc(sizeof(t_list));
	content_new = malloc(content_size);
	if(!content_new)
		return (NULL);
	content_new = ft_memcpy(content_new, content, content_size);
    if (content == NULL)
	{
		content_new = NULL;
        content_size = 0;
	}
    if(new)
    {
        new->content = content_new;
        new->content_size = content_size;
    }

    return(new);
}
