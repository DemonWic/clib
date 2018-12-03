/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 14:47:47 by ahintz            #+#    #+#             */
/*   Updated: 2018/12/03 16:01:04 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new_l;

	new_l = (t_list *)malloc(sizeof(t_list));
	if (new_l == NULL)
		return (NULL);
	if (content == NULL)
	{
		new_l->content = NULL;
		new_l->content_size = 0;
	}
	else
	{
		new_l->content = (void *)malloc(content_size);
		if (new_l->content == NULL)
			return (NULL);
		ft_memcpy(new_l->content, content, content_size);
		new_l->content_size = content_size;
	}
	new_l->next = NULL;
	return (new_l);
}
