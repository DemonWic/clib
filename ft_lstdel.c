/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 16:56:40 by ahintz            #+#    #+#             */
/*   Updated: 2018/12/03 17:47:36 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del) (void *, size_t))
{
	t_list *buf;

	buf = NULL;
	while ((*alst)->next)
	{
		buf = *alst;
		del(buf->content, buf->content_size);
		alst = &(*alst)->next;
		free(buf);
	}
		free(alst);
		alst = NULL;
}
