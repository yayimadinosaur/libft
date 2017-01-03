/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_count.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 18:13:53 by wfung             #+#    #+#             */
/*   Updated: 2017/01/03 12:09:52 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

size_t	ft_lst_count(t_list *lst)
{
	size_t	i;
	t_list	*current;

	i = 0;
	current = lst;
	if (!current)
		return (0);
	while (current != NULL)
	{
		printf("lst_count [lst #%zu][content = %zu]\n", i, current->content_size);
		i++;
		current = current->next;
		printf("onto next lst\n");
	}
	printf("finished count, total is %zu\n", i);
	return (i);
}

//						>>>>>WORKS, creating list with libft functins<<<<<<<
////lstadd only adds lst to beginning, pushes new lst to beginning


int		main(void)
{
	t_list	*new;
	t_list	*head;
	size_t	i;
	size_t	j;

	i = 0;
	j = 5;
	new = ft_lstnew(new, 0);
	if (!new)
		return (0);
	printf("headlst#, content [%zu, %zu]\n", i, new->content_size);
	head = new;
	while (i < j)
	{
		ft_lstadd(&head, ft_lstnew(new, i + 1));
		printf("lst#, content [%zu, %zu]\n", i, head->content_size);
		new->next = new;
		new = new->next;
		i++;
	}
	new->next = NULL;
	printf("lst total = %zu\n", ft_lst_count(head));
	return (0);
}


/*						>>>>>DOESNT WORK<<<<
int		main(void)
{
	t_list	**buff;
	t_list	*head;
	t_list	*total;
	size_t	j;
	size_t	i;

	j = 5;
	i = 0;
	buff = (t_list**)malloc(sizeof(t_list*) * j);
	if (!buff)
		return (0);
	while (i < j)
	{
		total = (t_list*)malloc(sizeof(t_list));
		if (!total)
			return (0);
		ft_lstadd(buff, head);
		if (i == 0)
			head = total;
		printf("created lst #%zu out of %zu\n", i, j);
		total->next = total;
		total = total->next;
		i++;
	}
	total->next = NULL;
	printf("finished creating lsts\n");
	printf("total lists = %zu\n", ft_lst_count(head));
	return (0);
}
*/

/*		>>>>>>>>WORKS!!!! created list with function from learn-c.org/en/Linked_lists<<<<<<
void	ft_lst_push(t_list **head_ref)
{
	t_list	*new;

	new = (t_list*)malloc(sizeof(t_list));
	if (!new)
		return ;
	new->next = *head_ref;
	*head_ref = new;
}
					>>>>>WORKS!!!!<<<<<<
int		main(void)
{
	t_list	*head;

	head = NULL;
	ft_lst_push(&head);
	ft_lst_push(&head);
	ft_lst_push(&head);
	ft_lst_push(&head);
	ft_lst_push(&head);
	printf("total count of lists = %zu\n", ft_lst_count(head));
	return (0);
}

*/

/*							>>>>>DOESNT WORK; SELF MADE (trial n error)<<<<<
 int		main(void)
{
	size_t	i;
	size_t	j;
//	t_list	**buff;
	t_list	*head;
	t_list	*current;

	i = 0;
	j = 5;
	head = NULL;
	current = NULL;
	buff = (t_list**)malloc(sizeof(t_list*) * (j));
	if (!buff)
	{
		printf("lst buff malloc failed\n");
		return (0);
	}
	head = (t_list*)malloc(sizeof(t_list));
	if (!head)
	{
		printf("head list failed\n");
		return (0);
	}
	current = head;
	current = current->next;
	while (i < j)
	{
		current = (t_list*)malloc(sizeof(t_list));
		if (!current)
		{
			printf("lst #%zu failed to malloc\n", i);
			return (0);
		}
		printf("lst %zu successful!\n", i);
		current = current->next;
		i++;
	}
	printf("%zu has been created; about to make last one NULL\n", i);
	if (!buff[i])
		printf("this node doesn't exist\n");
	buff[j] = NULL;
	current->next = NULL;
	printf("lst build complete %zu nodes have been created\n", i);
	printf("lst complete (%zu + 1 for null)\ntotal = %zu\n", i, ft_lst_count(head));
	return (0);
}
*/
