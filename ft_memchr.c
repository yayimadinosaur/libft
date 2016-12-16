/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 15:20:31 by wfung             #+#    #+#             */
/*   Updated: 2016/12/15 18:01:43 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	y;
	char			*x;

	i = 0;
	y = c;
	x = (char*)s;
	while (x[i] != '\0' && i < n)
	{
		if (x[i] == y)
			return ((void*)&x[i]);
		i++;
	}
	return ((void*)NULL);
}
