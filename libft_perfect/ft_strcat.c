/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suciu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 07:58:14 by suciu             #+#    #+#             */
/*   Updated: 2017/12/07 11:09:54 by suciu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int ld;
	int ls;

	i = 0;
	ld = 0;
	ls = 0;
	while (dest[ld] != '\0')
		ld++;
	while (src[ls] != '\0')
		ls++;
	while (src[i])
	{
		dest[ld + i] = src[i];
		i++;
	}
	dest[ld + ls] = '\0';
	return (dest);
}
