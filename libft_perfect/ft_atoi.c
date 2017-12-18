/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suciu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 08:48:57 by suciu             #+#    #+#             */
/*   Updated: 2017/12/15 19:43:38 by suciu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_checklong(long long n)
{
	if (n > 922337203685477580)
		return (-1);
	if (n < -922337203685477580)
		return (0);
	return (2);
}

int				ft_atoi(char *str)
{
	int			i;
	int			sig;
	long long	res;

	i = 0;
	sig = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == 45)
		sig = -1;
	if (str[i] == 43 || str[i] == 45)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		if (ft_checklong(res) != 2)
			return (ft_checklong(res));
		res = res * 10 + (str[i] - 48) * sig;
		if (sig == 1 && res < 0)
			return (-1);
		if (sig == -1 && res > 0)
			return (0);
		i++;
	}
	return ((int)res);
}
