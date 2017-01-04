/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_nows.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 12:39:09 by wfung             #+#    #+#             */
/*   Updated: 2017/01/03 19:59:55 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim_nows(char *str)
{
	int		i;
	int		j;
	char	*buff;

	i = 0;
	if (!str)
		return (NULL);
	j = ft_count_nonws(str);
	if (!(buff = (char*)malloc(sizeof(char) * (j + 1))))
	{
		free(&buff);
		return (NULL);
	}
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			buff[j] = str[i];
			j++;
		}
		i++;
	}
	buff[j] = '\0';
	return (buff);
}
