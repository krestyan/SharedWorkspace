/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 11:44:00 by ialexand          #+#    #+#             */
/*   Updated: 2017/12/08 11:45:16 by ialexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

int		ft_isalnum(int c)
{
	int		r;

	r = 0;
	if (ft_isalpha(c) != 0 || ft_isdigit(c) != 0)
		r = 1;
	return (r);
}
