/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 13:55:42 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/25 14:55:25 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	unsigned char	sim;
	unsigned char	ups;
	unsigned char	los;
	int				i;

	sim = (unsigned char)c;
	ups = 'A';
	los = 'a';
	i = 0;
	while (i++ < 26)
	{
		if (sim == ups++)
			return (1);
		if (sim == los++)
			return (1);
	}
	return (0);
}
