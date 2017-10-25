/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grand_priest <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 15:37:28 by grand_priest         #+# #+#             */
/*   Updated: 2017/10/24 16:55:03 by grand_priest        ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h> // atoi level 9000

int main(int ac, char **av)
{
    int     i;
    t_list *list;
    t_list *crawl;

	list = NULL;
	i = 1;
	list = ft_list_push_params(ac, av);
    crawl = list;
	while (crawl)
	{
		printf("%d\n", crawl->data);
		crawl = crawl->next;
	}
	printf("%d\n", ft_list_size(list));
	crawl = ft_list_last(list);
	printf("%d\n", crawl->data);
    return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>

void *func_t(void *i1, void *i2)
{
    int *retval = malloc(sizeof(int));
    *retval = *(int*)i1 + *(int*)i2;
    return retval;
}

int main(void)
{
    void* (*vfunc)(void *, void*);
    vfunc = func_t;

    int value1 = 100;
    int value2 = 2;
    void* sumvoid = vfunc(&value1, &value2);
    int sum = *(int*)sumvoid;
    free(sumvoid);
    printf("the value of sum is now %d\n", sum);
    return 0;
}
*/