/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 10:00:36 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/29 16:11:17 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		start;
	int		end;
	char	*res;

	i = 0;
	start = 0;
	end = ft_strlen(s);
	end--;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	res = (char *)malloc((end - start) + 1);
	if (res == NULL)
		return (NULL);
	while (start <= end)
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}
