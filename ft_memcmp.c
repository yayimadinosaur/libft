/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 15:24:09 by wfung             #+#    #+#             */
/*   Updated: 2016/12/15 17:18:59 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s1_buff;
	char	*s2_buff;

	i = 0;
	s1_buff = (char*)s1;
	s2_buff = (char*)s2;
	while (s1_buff[i] != '\0' && s2_buff[i] != '\0' && i < n)
	{
		if (s1_buff[i] == s2_buff[i])
			i++;
		else if (s1_buff[i] != s2_buff[i])
			return (s1_buff[i] - s2_buff[i]);
	}
	return (0);
}
