/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 10:00:36 by ahintz            #+#    #+#             */
/*   Updated: 2018/12/04 17:54:57 by ahintz           ###   ########.fr       */
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
	if (!s)
		return (NULL);
	end = ft_strlen(s);
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	if (start == end)
		return (ft_strnew(0));
	end--;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	res = (char *)malloc((end - start) + 2);
	if (res == NULL)
		return (NULL);
	while (start <= end)
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}

int		main()
{
//	char s[] = "\t\n  \tAAA \t BBB\t\n  \t";
//	char *s1;
//	s1 = ft_strtrim(s);
	int p = strcmp(ft_strtrim("\t\n \tAAA \t BBB\t\n \t"), "AAA \t BBB");
	printf("%i\n", p);
//	printf("%s\n", ft_strtrim(".    ASDFGGHJ Af fdgsg   fdghdfgh       "));
//	printf("%s\n", s1);
	return (0);
}
