/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 08:58:21 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/23 09:26:11 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char			*d1;
	char			*d2;
	size_t			i;

	d1 = (char *)s1;
	d2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (d1[i] == d2[i])
			i++;
		else
			return (d1[i] - d2[i]);
	}
	return (0);
}
