/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 17:40:16 by wfung             #+#    #+#             */
/*   Updated: 2017/01/03 20:40:53 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*buff;

	i = 0;
	if (!s)
		return (NULL);
	buff = (char*)malloc(sizeof(char) * (len + 1));
	if (!buff)
	{
		free(buff);
		return (NULL);
	}
	while (i < len)
	{
		buff[i] = s[start];
		start++;
		i++;
	}
	buff[i] = '\0';
	return (buff);
}
