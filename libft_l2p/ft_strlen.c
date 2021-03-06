/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 15:27:42 by ialexand          #+#    #+#             */
/*   Updated: 2017/12/08 10:55:23 by ialexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	r;
	size_t	i;

	r = 0;
	i = 0;
	while (s[i] != '\0')
	{
		r++;
		i++;
	}
	return (r);
}
