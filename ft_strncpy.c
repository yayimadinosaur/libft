/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 13:54:36 by wfung             #+#    #+#             */
/*   Updated: 2016/12/18 20:11:48 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int i;

	i = 0;
	while (i < len)
	{
		if (src[i] != '\0')
			dst[i] = src[i];
		else if (src[i] == '\0')
			dst[i] = '\0';
		i++;
	}
	return (dst);
}
