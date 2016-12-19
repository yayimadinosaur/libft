/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 17:40:16 by wfung             #+#    #+#             */
/*   Updated: 2016/12/18 19:12:53 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*buff;

	i = 0;
	buff = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!buff)
		return (NULL);
	while (start < len)
	{
		buff[i] = s[start];
		start++;
		i++;
	}
	buff[i] = '\0';
	return (buff);
}
