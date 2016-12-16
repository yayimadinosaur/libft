/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 13:56:40 by wfung             #+#    #+#             */
/*   Updated: 2016/12/13 14:55:24 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new;

	i = 0;
	new = ft_strdup(s);
	if (!new)
		return (NULL);
	while (i < ft_strlen(s))
	{
		new[i] = f(i, new[i]);
		if (!f(i, new[i]))
			return (NULL);
		i++;
	}
	return (new);
}
