/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 15:05:19 by wfung             #+#    #+#             */
/*   Updated: 2016/12/13 19:20:49 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*buff;

	i = 0;
	j = ft_strlen(s1);
	buff = (char*)malloc(sizeof(char) * (j + 1));
	if (s1[i] == '\0')
		return (NULL);
	while (i < j)
	{
		buff[i] = s1[i];
		i++;
	}
	buff[i] = '\0';
	return (buff);
}
