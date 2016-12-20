/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:55:44 by wfung             #+#    #+#             */
/*   Updated: 2016/12/20 15:24:12 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*src_buf;
	unsigned char	*dst_buf;

	i = 0;
	src_buf = (unsigned char*)src;
	dst_buf = (unsigned char*)dst;
	if (*src_buf >= *dst_buf || *src_buf >= (*dst_buf + len))
	{
		while (len)
		{
			dst_buf[i] = src_buf[i];
			i++;
			len--;
		}
	}
	else
		dst_buf = dst_buf + len - 1;
		src_buf = src_buf + len - 1;
		while (len)
		{
			*dst_buf-- = *src_buf--;
			len--;
		}
	return ((void*)dst_buf);
}
