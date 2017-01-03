/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/01 17:51:36 by wfung             #+#    #+#             */
/*   Updated: 2017/01/01 17:57:08 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_array_word(char **array, char const *s, char c)
{
	int		i;
	int		start;
	int		end;
	int		word_count;

	i = 0;
	word_count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			end = i + 1;
			array[word_count] = (char*)malloc(sizeof(char) * (end - start));
			if (!array[word_count])
				return (NULL);
			word_count++;
		}
		else if (s[i] == c)
			i++;
	}
	array[word_count] = NULL;
	return (array);
}
