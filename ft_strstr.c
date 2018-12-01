/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 18:41:21 by ahintz            #+#    #+#             */
/*   Updated: 2018/12/01 12:14:15 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		size;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	size = ft_strlen(needle);
	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
			while(needle[j])
			{
				if (haystack[i] != needle[j])
				{
					i = i - j;
					break ;
				}
				else if (j == (size - 1))
					return ((char *)&haystack[i - j]);
				i++;
				j++;
			}
		i++;
	}
	return (NULL);
}
/*
int		main()
{
	char s1[] = "FF";
	char s2[] = "F has is F not FF";
	char *s3, *s4;
	s3 = strstr(s2, s1);
	s4 = ft_strstr(s2, s1);
	printf("%s\n", s3);
	printf("%s\n", s4);
	return (0);
}*/
