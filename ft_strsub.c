/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 13:31:43 by ahintz            #+#    #+#             */
/*   Updated: 2018/12/02 12:35:48 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;
	char	*con;

	i = 0;
	if (!s)
		return (NULL);
	res = (char *)malloc(len + 1);
	if (res == NULL)
		return (NULL);
	s += start;
	con = res;
	while (*s && i < len)
	{
		*res++ = *s++;
		i++;
	}
	*res = '\0';
	return (con);
}
