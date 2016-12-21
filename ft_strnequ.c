/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 18:44:20 by wfung             #+#    #+#             */
/*   Updated: 2016/12/20 16:54:54 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s1 == '\0' && s2 == '\0')
		return (1);
	while (s1 != '\0' && s2 != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (0);
		else if (s1[i] == s2[i])
			i++;
	}
	return (1);
}
