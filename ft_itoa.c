/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 11:08:45 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/29 15:52:02 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_size(int n)
{
	int		i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*res;
	int		size;

	size = 0;
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	size += ft_size(n);
	res = (char *)malloc(size + 1);
	res[size--] = '\0';
	while (n > 0)
	{
		res[size--] = (n % 10) + 48;
		n /= 10;
	}
	printf("%i\n", size);
	if (size == 0)
		res[size] = '-';
	return (res);
}
