/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:53:30 by wfung             #+#    #+#             */
/*   Updated: 2016/12/18 18:06:15 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	x;
	unsigned char	*dst_buff;
	unsigned char	*src_buff;

	i = 0;
	x = c;
	if (n == 0)
		return ((void*)NULL);
	dst_buff = (unsigned char*)dst;
	src_buff = (unsigned char*)src;
	while (src_buff[i] != '\0' && i <= n)
	{
		dst_buff[i] = src_buff[i];
		if (x == dst_buff[i])
		{
			return ((void*)&dst_buff[i + 1]);
		}
		i++;
	}
	return ((void*)NULL);
}
