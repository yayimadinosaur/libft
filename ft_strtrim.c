/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 17:45:44 by wfung             #+#    #+#             */
/*   Updated: 2016/12/15 21:07:25 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*buff;

	i = 0;
	j = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = i;
	while (s[i] != '\0')
		i++;
	while (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t')
		i--;
	buff = (char*)malloc(sizeof(char) * i - j + 1);
	if (!buff)
		return (NULL);
	while (j < (i - j))
	{
		buff[j] = s[j];
		j++;
	}
	buff[j] = '\0';
	return (buff);
}
