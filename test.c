/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 11:10:12 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/30 12:18:39 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	char	*s1 = "\xff\xaa\xde\xffMACOSX\xff";
	char	*s2 = "\xff\xaa\xde\x02";
	size_t	s = 8;

	int i1 = memcmp(s1, s2, s);
	int i2 = ft_memcmp(s1, s2, s);
	printf("%i\n", i1);
	printf("%i\n", i2);
	return (0);
}
