/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 20:23:27 by wfung             #+#    #+#             */
/*   Updated: 2016/12/15 18:11:01 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	k = 0;
	if (little[j] == '\0')
		return ((char*)big);
	while (big[i] != '\0' && k < len)
	{
		while (little[j] != '\0' && little[j] == big[i])
			j++;
		if (little[j] == '\0')
			return ((char*)&big[i]);
		i++;
		k++;
		j = 0;
	}
	return ((char*)NULL);
}
