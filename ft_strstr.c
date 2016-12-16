/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 20:06:16 by wfung             #+#    #+#             */
/*   Updated: 2016/12/15 17:57:36 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char*)big);
	while (big[i] != '\0')
	{
		if (little[j] != '\0' && little[j] == big[i])
			j++;
		else if (little[j] != big[i])
			j = 0;
		else if (little[j] == '\0' && little[j] == big[i])
			return ((char*)&big[i]);
		i++;
	}
	return (NULL);
}
