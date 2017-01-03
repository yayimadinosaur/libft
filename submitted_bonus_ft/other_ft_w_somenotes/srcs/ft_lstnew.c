/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 17:43:23 by wfung             #+#    #+#             */
/*   Updated: 2016/12/13 20:47:47 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
/*	need to COPY PARAMETERS OF FUNCTION
*/
	t_list	*head;
	head = (t_list*)malloc(sizeof(t_list));
	if (!head)
	{
		content = NULL;
		content_size = NULL;
	}
	head->next = NULL;
}

/*
Allocates (with malloc(3)) and returns a “fresh” link. 

The variables content and content_size of the new link are initialized by 
copy of the parameters of the function. 

If the parameter content is nul, the variable content is initialized to NULL
and the variable content_size is initialized to 0 even if the parameter 
content_size isn’t. The variable next is initialized to NULL. 

If the allocation fails, the function returns NULL.
*/
