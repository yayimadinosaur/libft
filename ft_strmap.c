/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 13:33:10 by wfung             #+#    #+#             */
/*   Updated: 2016/12/19 21:08:44 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*new;

	i = 0;
	if (!s)
		return (NULL);
	new = ft_strdup(s);
	if (!new)
		return (NULL);
	while (s[i] != '\0')
	{
		new[i] = f(s[i]);
		if (!new[i])
			return (NULL);
		i++;
	}
	new[i] = '\0';
	return (new);
}
