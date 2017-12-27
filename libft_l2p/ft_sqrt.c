/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 14:00:27 by ialexand          #+#    #+#             */
/*   Updated: 2017/12/15 14:28:38 by ialexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_sqrt(long nr)
{
	long	r;

	if (nr < 1)
		return (0);
	if (nr == 1)
		return (1);
	r = 1;
	while (r * r < nr)
		r++;
	return (r);
}
