/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 16:22:21 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/25 16:23:34 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(int c)
{
	unsigned char	sim;
	unsigned char	num;

	sim = (unsigned char)c;
	num = 32;
	while (num <= 126)
		if (sim == num++)
			return (1);
	return (0);
}
