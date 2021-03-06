/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 15:57:49 by wfung             #+#    #+#             */
/*   Updated: 2016/12/15 21:29:06 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list			*current;
	unsigned char	*copy;

	copy = (unsigned char*)content;
	current = (t_list*)malloc(sizeof(t_list));
	if (!current)
		return (NULL);
	if (content == NULL)
	{
		current->content = NULL;
		current->content_size = 0;
	}
	current->next = NULL;
	return ((t_list*)ft_memmove(copy, current, content_size));
}

//malloc first
//check if NULL, make null, make to 0
//then memcpy / memmove - memcpy less reliable, memmove = safer (doesnt overlap)
//
//hardcoding = more efficient
//function calling = slower
