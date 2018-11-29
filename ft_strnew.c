/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:47:04 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/29 16:06:11 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*res;
	char	*con;

	i = 0;
	res = (char *)malloc(size);
	if (res == NULL)
		return (NULL);
	con = res;
	while (i < size)
		res[i++] = '\0';
	return (con);
}
