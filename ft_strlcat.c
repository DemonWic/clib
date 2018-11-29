/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 18:37:10 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/24 16:06:33 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	n;
	char	*r;

	i = 0;
	dlen = ft_strlen(dst);
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(src));
	r = &dst[dlen];
	while (src[i] != '\0' && n != 1)
	{
		r[i] = src[i];
		i++;
		n--;
	}
	r[i] = '\0';
	return (dlen + ft_strlen(src));
}
