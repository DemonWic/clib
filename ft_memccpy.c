/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:09:58 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/22 17:43:42 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	sim;
	char			*s;
	char			*d;
	size_t			i;

	sim = (char)c;
	s = (char *)src;
	d = (char *)dst;
	i = 0;
	while (i < n)
	{
		*(d++) = *(s++);
		i++;
		if (*(s) == sim)
		{
			*(d++) = *(s++);
			return (d);
		}
	}
	return (NULL);
}
