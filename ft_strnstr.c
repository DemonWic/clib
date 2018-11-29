/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 12:20:55 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/25 12:20:59 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i++] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
			while (needle[j])
			{
				if (haystack[i++] == needle[j++] && !(needle[j + 1]) && i < len)
					return ((char *)(&haystack[i - j]));
				else if (haystack[i] != needle[j])
				{
					i = i - j;
					break ;
				}
			}
	}
	return (NULL);
}
