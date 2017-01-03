/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_nows_be.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 17:27:55 by wfung             #+#    #+#             */
/*   Updated: 2017/01/02 18:03:28 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen_nows_be(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!str)
		return (-1);
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (str[i] == '\0')
		return (-1);
	j = i;
	while (str[i] != '\0')
		i++;
	if (str[i] == '\0')
		i--;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\t')
		i--;
	j = i - j + 1;
	return (j);
}
