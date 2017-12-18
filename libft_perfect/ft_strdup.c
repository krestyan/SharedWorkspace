/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeatcu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 16:03:47 by adeatcu           #+#    #+#             */
/*   Updated: 2017/12/15 18:13:23 by suciu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	if ((s2 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
	{
		ft_strcpy(s2, s1);
		return (s2);
	}
	return (NULL);
}
