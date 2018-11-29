/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:55:21 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/27 16:36:37 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	temp[len];

	i = -1;
	while (++i < len)
	{
		temp[i] = *((char *)src++);
	}
	i = -1;
	while ((++i < len) && *((char *)dst))
	{
		*((char *)dst++) = temp[i];
	}
	return (dst);
}
