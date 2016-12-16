/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 17:40:16 by wfung             #+#    #+#             */
/*   Updated: 2016/12/07 18:15:49 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*buff;

	buff = (char*)malloc(sizeof(char) * len);
	if (!buff)
		return (NULL);
	while (start < len)
	{
		buff[start] = s[start];
		start++;
	}
	return (buff);
}
