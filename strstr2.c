/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 18:41:21 by ahintz            #+#    #+#             */
/*   Updated: 2018/12/01 11:12:06 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		size;
	char	*h;
	char	*n;

	i = 0;
	size = ft_strlen(needle);
	h = (char *)haystack;
	n = (char *)needle;
	if (n[0] == '\0')
		return (h);
	while (h[i++])
	{
		j = 0;
		if (h[i] == n[j])
			while (n[j])
			{
				if (h[i++] == n[j++] && j == size)
				{
					return (&h[i - j]);
				}
				else if (h[i] != n[j])
				{
					i = i - j;
					break ;
				}
			}
	}
	return (NULL);
}
