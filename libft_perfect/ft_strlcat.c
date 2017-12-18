/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 11:17:49 by adstan            #+#    #+#             */
/*   Updated: 2017/12/15 18:40:44 by suciu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t l;

	i = 0;
	l = 0;
	while (((size > 0) && (i < size) && (l == 0)))
	{
		if (dst[i] == '\0')
			l = 1;
		i++;
	}
	j = ft_strlen(dst);
	if (l == 0)
		return (size + ft_strlen(src));
	else
	{
		i = -1;
		while (src[++i] != '\0' && i < size - j - 1)
			dst[j + i] = src[i];
		dst[j + i] = '\0';
	}
	return (j + ft_strlen(src));
}
