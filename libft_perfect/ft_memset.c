/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suciu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 13:21:11 by suciu             #+#    #+#             */
/*   Updated: 2017/12/15 18:26:01 by suciu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*car;

	i = 0;
	car = (unsigned char *)b;
	while (i < len)
	{
		car[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
