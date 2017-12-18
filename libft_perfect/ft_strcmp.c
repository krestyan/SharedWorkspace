/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suciu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 15:56:16 by suciu             #+#    #+#             */
/*   Updated: 2017/12/09 18:48:17 by suciu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (unsigned char)s1[i] - (unsigned char)s2[i];
		if (s1[i] > s2[i])
			return (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	return (0);
}
