/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suciu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 17:28:52 by suciu             #+#    #+#             */
/*   Updated: 2017/12/11 20:11:30 by suciu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*res;
	size_t	len;
	size_t	i;

	if (s)
	{
		i = 0;
		while (WHITESP(s[i]))
			i++;
		len = ft_strlen(s) - 1;
		while (len > i && WHITESP(s[len]))
			len--;
		if (len < i)
			return (res = ft_strdup(""));
		if ((res = ft_strsub(s, i, len - i + 1)))
			return (res);
	}
	return (NULL);
}
