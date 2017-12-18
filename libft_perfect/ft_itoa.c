/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suciu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 08:49:40 by suciu             #+#    #+#             */
/*   Updated: 2017/12/11 18:25:02 by suciu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	size_t	l;

	if (n == -2147483647 - 1)
		return (ft_strdup("-2147483648"));
	if (n == 2147483647)
		return (ft_strdup("2147483647"));
	l = 1 + ft_digitno(n);
	if (!(res = (char *)(malloc(sizeof(char) * l))))
		return (NULL);
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	res[l - 1] = '\0';
	while (n > 0)
	{
		l--;
		res[l - 1] = (n % 10) + '0';
		n = n / 10;
	}
	return (res);
}
