/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suciu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 14:12:05 by suciu             #+#    #+#             */
/*   Updated: 2017/12/15 17:44:22 by suciu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	size_t	i;

	i = 0;
	if (s)
	{
		if ((res = ft_strnew(ft_strlen(s))))
		{
			while (i < ft_strlen(s))
			{
				res[i] = f(s[i]);
				i++;
			}
			return (res);
		}
	}
	return (NULL);
}
