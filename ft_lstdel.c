/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 16:56:40 by ahintz            #+#    #+#             */
/*   Updated: 2018/12/04 14:01:57 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del) (void *, size_t))
{
	t_list **buf;

	buf = alst;
	while ((*buf)->next)
		ft_lstdel(&(*buf)->next, del);
	ft_lstdelone(&(*buf), del);
}
