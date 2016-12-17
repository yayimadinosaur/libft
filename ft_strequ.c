/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 17:37:26 by wfung             #+#    #+#             */
/*   Updated: 2016/12/16 17:30:54 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		i;
	char	*s1_buf;
	char	*s2_buf;

	i = 0;
	s1_buf = (char*)s1;
	s2_buf = (char*)s2;
	if (s1_buf[i] == '\0' || s2_buf[i] == '\0')
		return (0);
	while (s1_buf != '\0' && s2_buf != '\0')
	{
		if (s1_buf[i] != s2_buf[i])
			return (0);
		else if (s1_buf[i] == s2_buf[i])
			i++;
	}
	return (1);
}
