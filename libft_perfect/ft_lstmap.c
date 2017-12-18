/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suciu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 16:44:18 by suciu             #+#    #+#             */
/*   Updated: 2017/12/11 19:38:30 by suciu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fun;
	t_list	*first;
	t_list	*tmp;

	if (lst)
	{
		fun = f(lst);
		tmp = ft_lstnew(fun->content, fun->content_size);
		first = tmp;
		lst = lst->next;
		while ((lst))
		{
			fun = f(lst);
			lst = lst->next;
			tmp->next = ft_lstnew(fun->content, fun->content_size);
			tmp = tmp->next;
		}
		return (first);
	}
	return (NULL);
}
