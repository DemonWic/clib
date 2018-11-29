/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 13:31:43 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/29 16:06:51 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	i = 0;
	res = (char *)malloc(len);
	if (res == NULL)
		return (NULL);
	s += start;
	while (*s || (i < len))
	{
		*res++ = *s++;
		i++;
	}
	return (res - i);
}
