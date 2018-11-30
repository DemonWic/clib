/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 09:43:21 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/29 16:01:56 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_memory(char **res, char const *s, char c)
{
	int		j;
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		j = 0;
		if (s[i] != c)
		{
			while (s[i])
			{
				if (s[i + 1] == c || s[i + 1] == '\0')
				{
					res[count] = (char *)malloc(j + 2);
					count++;
					break ;
				}
				i++;
				j++;
			}
		}
		i++;
	}
}

static void	ft_insert(char **res, char const *s, char c)
{
	int		j;
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] != c)
		{
			if (s[i + 1] == c || s[i + 1] == '\0')
			{
				printf("%i\n", i);
				printf("%c\n", s[i]);
				res[count][j++] = s[i];
				res[count][j] = '\0';
				count++;
				break ;
			}
			res[count][j++] = s[i++];
		}
		i++;
	}
	res[count] = "\0";
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		count;
	char	**res;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	res = (char **)malloc(sizeof(char *) * (count + 1));
	ft_memory(res, s, c);
	ft_insert(res, s, c);
	return (res);
}

int	main()
{
	char	str119[] = "*hello***hello***hello*";
	char	**arr;
	char	str120[] = "iiiiiihelloiihelloihelloiiii";
	char	**arr2;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRSPLIT\x1b[0m");
	printf("Initial: %s\n", str119);
	arr = ft_strsplit(str119, '*');
	printf("ft_strtrim return: \n[0] %s\n[1] %s\n[2] %s\n", arr[0], arr[1], arr[2]);
	if (strcmp(arr[0], "hello") == 0 && strcmp(arr[1], "hello") == 0 && strcmp(arr[2], "hello") == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str120);
	arr2 = ft_strsplit(str120, 'i');
	printf("ft_strtrim return: \n[0] %s\n[1] %s\n[2] %s\n", arr2[0], arr2[1], arr2[2]);
	if (strcmp(arr[0], "hello") == 0 && strcmp(arr[1], "hello") == 0 && strcmp(arr[2], "hello") == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	return (0);
}

