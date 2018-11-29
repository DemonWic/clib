/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 15:41:49 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/25 16:10:29 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isascii(int c)
{
	unsigned char	sim;
	unsigned char	num;

	sim = (unsigned char)c;
	num = 0;
	while (num <= 127)
		if (sim == num++)
			return (1);
	return (0);
}
