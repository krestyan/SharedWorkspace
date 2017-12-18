/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suciu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 18:01:05 by suciu             #+#    #+#             */
/*   Updated: 2017/12/15 17:57:15 by suciu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	x;
	size_t	i;
	char	*d;
	int		m;

	m = -1;
	d = (char *)s;
	x = (char)c;
	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == x)
			m = i;
		i++;
	}
	if (m > -1)
		return (d + m);
	return (NULL);
}
