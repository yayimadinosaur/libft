/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 13:54:36 by wfung             #+#    #+#             */
/*   Updated: 2016/12/15 17:21:56 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		{
			if (src[i] == '\0')
				i++;
			while (i < len)
			{
				dst[i] = '\0';
				i++;
			}
			if (src[i] != '\0')
				i++;
		}
	}
	return (dst);
}
