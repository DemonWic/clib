/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 14:58:55 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/25 15:37:01 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	unsigned char	sim;
	unsigned char	ups;
	unsigned char	los;
	unsigned char	num;
	int				i;

	sim = (unsigned char)c;
	ups = 'A';
	los = 'a';
	num = '0';
	i = 0;
	while (i++ < 26)
		if (sim == ups++ || sim == los++)
			return (1);
	i = 0;
	while (i++ <= 9)
		if (sim == num++)
			return (1);
	return (0);
}
