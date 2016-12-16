/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 18:55:56 by wfung             #+#    #+#             */
/*   Updated: 2016/12/13 20:44:40 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_tab_word_count(char const *s, char c)
{
	int		i;
	int		word_count;
	char	**tab_count;

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
	tab_count = (char**)malloc(sizeof(char*) * (word_count + 1));
	if (!tab_count)
		return (NULL);
	tab_count[word_count] = NULL;
	return (tab_count);
}

static char	**ft_tab_word(char **tab, char const *s, char c)
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
			tab[word_count] = (char*)malloc(sizeof(char) * (end - start));
			if (!tab[word_count])
				return (NULL);
			word_count++;
		}
		else if (s[i] == c)
			i++;
	}
	tab[word_count] = NULL;
	return (tab);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		word_count;
	char	**buff_tab;

	i = 0;
	word_count = 0;
	buff_tab = ft_tab_word(ft_tab_word_count(s, c), s, c);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i] != c && s[i] != '\0')
				buff_tab[word_count][j++] = s[i++];
			buff_tab[word_count][j] = '\0';
			word_count++;
		}
		else if (s[i] == c)
			i++;
	}
	return (buff_tab);
}
