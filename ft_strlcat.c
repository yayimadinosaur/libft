/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 16:53:09 by wfung             #+#    #+#             */
/*   Updated: 2016/12/19 17:02:09 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (dst[i] != '\0')
	{
		i++;
		k++;
	}
	while (src[j] != '\0' && j < size && j <= ft_strlen(dst))
	{
		dst[i] = src[j];
		j++;
		k++;
		i++;
	}
	if (src[j] == '\0')
	{
		dst[i] = '\0';
		k++;
	}
	return (k);
}
