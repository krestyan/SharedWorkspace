/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suciu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 18:44:19 by suciu             #+#    #+#             */
/*   Updated: 2017/12/15 17:54:06 by suciu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i] && (i < len))
	{
		while ((little[j] == big[i + j]) && ((i + j) < len))
		{
			if (j == (ft_strlen(little) - 1))
				return (char *)(big + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
