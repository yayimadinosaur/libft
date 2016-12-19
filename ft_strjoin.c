/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 18:22:23 by wfung             #+#    #+#             */
/*   Updated: 2016/12/18 18:35:47 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		x;
	char	*buff;

	i = 0;
	j = 0;
	x = (ft_strlen(s1) + ft_strlen(s2) + 1);
	buff = (char*)malloc(sizeof(char) * x);
	if (!buff)
		return (NULL);
	while ((i + j) < x)
	{
		if (s1[i] != '\0')
			buff[i] = s1[i];
		else if (s2[j] != '\0')
			buff[i] = s2[j];
		i++;
		j++;
	}
	buff[i] = '\0';
	return (buff);
}
