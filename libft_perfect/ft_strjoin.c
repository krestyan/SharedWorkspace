/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suciu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 16:46:26 by suciu             #+#    #+#             */
/*   Updated: 2017/12/11 19:22:46 by suciu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	j = ft_strlen(s1);
	if ((res = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
	{
		while (i < ft_strlen(s1))
		{
			res[i] = s1[i];
			i++;
		}
		i = 0;
		while (j < ft_strlen(s1) + ft_strlen(s2) + 1 - 1)
		{
			res[j] = s2[i];
			j++;
			i++;
		}
		return (res);
	}
	return (NULL);
}