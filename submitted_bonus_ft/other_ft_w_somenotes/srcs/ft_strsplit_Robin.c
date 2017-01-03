/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 18:55:56 by wfung             #+#    #+#             */
/*   Updated: 2016/12/07 19:02:23 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	*buff;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			j = i;
			if (s[i] != c)
				word_count++;
				while (s[i] != c)
					++
			while (s[i] != c)
				i++;
			k = i + 1;
			buff = (char*)malloc(sizeof(char) * k);
			if (!buff)
				return (NULL);
			while (j <= k)
				buff[j++] = s[j++];
			buff[k] = '\0';
		}
		if (s[i] == c)
			i++;
		free(buff);
	}
}

//find out words with a loop
//1st malloc: create pointer to all your word pointers ptr =  (char **)malloc( blah)
//loop finds individual letter count for each word
//next malloc letter size of each word (char *) ptr[0] = (char *)malloc(blah)
