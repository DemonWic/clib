/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:55:21 by ahintz            #+#    #+#             */
/*   Updated: 2018/12/01 08:44:39 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	temp[len];
	unsigned char	*d;
	unsigned char	*s;

	i = -1;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (++i < len)
	{
		temp[i] = *s++;
	}
	i = -1;
	while ((++i < len) && *d)
	{
		*d++ = temp[i];
	}
	return (d);
}
