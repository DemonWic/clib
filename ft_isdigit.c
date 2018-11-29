/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 14:39:23 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/25 14:56:00 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(int c)
{
	unsigned char	sim;
	unsigned char	num;
	int				i;

	sim = (unsigned char)c;
	num = '0';
	i = 0;
	while (i++ <= 9)
		if (sim == num++)
			return (1);
	return (0);
}
