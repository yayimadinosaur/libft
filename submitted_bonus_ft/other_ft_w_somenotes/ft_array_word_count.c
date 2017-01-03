/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_word_count.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/01 17:48:40 by wfung             #+#    #+#             */
/*   Updated: 2017/01/01 17:51:26 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_array_word_count(char const *s, char c)
{
	int		i;
	int		word_count;
	char	*array_count;

	i = 0;
	word_count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			word_count++;
		}
	}
	array_count = (char**)malloc(sizeof(char*) * (word_count + 1));
	if (!array_count)
		return (NULL);
	array_count[word_count] = NULL;
	return (array_count);
}
