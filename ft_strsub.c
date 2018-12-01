/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 13:31:43 by ahintz            #+#    #+#             */
/*   Updated: 2018/12/01 16:47:20 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;
	char	*con;

	i = 0;
	res = (char *)malloc(len + 1);
	if (res == NULL)
		return (NULL);
	s += start;
	con = res;
	while (*s || (i < len + 1))
	{
		*res++ = *s++;
		i++;
	}
	*res = '\0';
	return (con);
}
