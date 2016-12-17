/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:55:44 by wfung             #+#    #+#             */
/*   Updated: 2016/12/15 17:12:59 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_buff;
	char	*src_buff;

	i = 0;
	dst_buff = (char*)dst;
	src_buff = (char*)src;
	while (src_buff != '\0' && i < len)
	{
		dst_buff[i] = src_buff[i];
		i++;
	}
	return ((void*)dst_buff);
}