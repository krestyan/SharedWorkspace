/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcht.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suciu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 17:45:55 by suciu             #+#    #+#             */
/*   Updated: 2017/12/15 17:58:17 by suciu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	x;
	size_t	i;
	char	*d;

	d = (char *)s;
	x = (char)c;
	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == x)
			return (d);
		i++;
		d++;
	}
	return (NULL);
}
