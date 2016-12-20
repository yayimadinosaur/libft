/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 13:54:36 by wfung             #+#    #+#             */
/*   Updated: 2016/12/19 16:37:50 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = ft_strlen(src);
	while (src[i] != '\0' && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
		dst[i] = '\0';
	while (x < len)
	{
		dst[i] = '\0';
		i++;
		x++;
	}
	return (dst);
}
