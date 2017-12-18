/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suciu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 16:46:52 by suciu             #+#    #+#             */
/*   Updated: 2017/12/11 19:52:20 by suciu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	x;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)s;
	x = (unsigned char)c;
	while (i < n)
	{
		if (*d == x)
			return (d);
		i++;
		d++;
	}
	return (NULL);
}
