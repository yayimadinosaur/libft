/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:39:12 by wfung             #+#    #+#             */
/*   Updated: 2016/12/20 17:30:53 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	j;
	char			*k;

	i = 0;
	k = (char*)b;
	j = (unsigned char)c;
	while (i < len)
	{
		k[i] = j;
		i++;
	}
	return (k);
}
