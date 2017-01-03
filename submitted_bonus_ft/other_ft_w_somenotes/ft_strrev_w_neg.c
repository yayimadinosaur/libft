/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev_w_neg.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/01 17:38:34 by wfung             #+#    #+#             */
/*   Updated: 2017/01/01 17:43:56 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_intarray_rev_neg(char *str)
{
	int		i;
	int		j;
	char	x;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	i = i - 1;
	if (str[j] == '-')
		j++;
	while (j < i)
	{
		x = str[j];
		str[j] = str[i];
		str[i] = x;
		i--;
		j++;
	}
	return (str);
}
