/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 11:47:27 by ialexand          #+#    #+#             */
/*   Updated: 2017/12/08 11:51:01 by ialexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

int		ft_isascii(int c)
{
	int		r;

	r = 0;
	if (c >= 0 && c <= 127)
		r = 1;
	return (r);
}
