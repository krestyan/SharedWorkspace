/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suciu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 14:08:48 by suciu             #+#    #+#             */
/*   Updated: 2017/12/11 19:04:49 by suciu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*link1;
	t_list	*link2;

	link1 = *alst;
	while (link1)
	{
		link2 = link1->next;
		del(link1->content, link1->content_size);
		free(link1);
		link1 = link2;
	}
	*alst = NULL;
}
