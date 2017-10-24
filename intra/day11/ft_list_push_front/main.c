/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrestya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 15:37:28 by akrestya          #+#    #+#             */
/*   Updated: 2017/10/24 16:55:03 by akrestya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void ft_list_push_front(t_list **begin_list, int data);

int main(void)
{
    int i;
    t_list *list;

	list = NULL;
    i = 42;
    int j = 53;
    ft_list_push_front(&list, i);
    ft_list_push_front(&list, j);
	while (list)
	{
		printf("%d\n", list->data);
		list = list->next;
	}
    return (0);
}