/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 15:57:49 by wfung             #+#    #+#             */
/*   Updated: 2017/01/01 19:23:29 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*current;

	current = (t_list*)malloc(sizeof(t_list));
	if (!current)
		return (NULL);
	if (content == NULL)
	{
		current->content = NULL;
		current->content_size = 0;
	}
	else
	{
		current->content = ft_memalloc(content_size);
		if (current->content == NULL)
		{
			ft_memdel((void**)&current);
			return (NULL);
		}
		current->content_size = content_size;
		ft_memmove(current->content, content, content_size);
	}
	current->next = NULL;
	return (current);
}
