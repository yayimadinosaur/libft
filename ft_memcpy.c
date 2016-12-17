/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:48:50 by wfung             #+#    #+#             */
/*   Updated: 2016/12/15 16:54:33 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dst_buff;
	char	*src_buff;

	i = 0;
	dst_buff = dst;
	src_buff = (char*)src;
	while (src_buff != '\0' && i < n)
	{
		dst_buff[i] = src_buff[i];
		i++;
	}
	return ((void*)dst_buff);
}