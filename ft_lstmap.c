/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 15:50:05 by wfung             #+#    #+#             */
/*   Updated: 2017/01/01 19:13:06 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*current;

	if (!lst || !f)
		return (NULL);
	head = f(lst);
	if (!head)
		return (NULL);
	current = head;
	lst = lst->next;
	while (lst != NULL)
	{
		if (!(current->next = f(lst)))
			return (NULL);
		lst = lst->next;
		current = current->next;
	}
	return (head);
}
