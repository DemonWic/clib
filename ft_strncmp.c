/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 12:27:46 by ahintz            #+#    #+#             */
/*   Updated: 2018/12/01 14:28:23 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				i;
	int				size;
	unsigned char	*r1;
	unsigned char	*r2;

	i = 0;
	size = (int)n;
	r1 = (unsigned char *)s1;
	r2 = (unsigned char *)s2;
	while ((r1[i] || r2[i]) && i < size)
	{
		if (r1[i] != r2[i])
			return (r1[i] - r2[i]);
		i++;
	}
	return (0);
}
