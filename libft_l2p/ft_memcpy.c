/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 12:21:28 by ialexand          #+#    #+#             */
/*   Updated: 2017/12/08 10:51:10 by ialexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	while (len > 0)
	{
		((unsigned char*)dst)[len - 1] = ((unsigned char*)src)[len - 1];
		len--;
	}
	return (dst);
}
