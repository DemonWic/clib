/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 17:06:15 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/27 16:32:18 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int c)
{
	unsigned char	sim;

	sim = (unsigned char)c;
	if (sim >= 65 && sim <= 90)
		return (sim + 32);
	else
		return (sim);
}
