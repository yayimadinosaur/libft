/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 15:50:05 by wfung             #+#    #+#             */
/*   Updated: 2016/12/20 08:16:50 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*current;

	current = lst;
	if (current == NULL)
		return (NULL);
	while (current != NULL)
	{
		if (!f(current))
			return (NULL);
		f(current);
		free((void*)current);
		current = current->next;
	}
	return (current);
}
