/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 16:53:09 by wfung             #+#    #+#             */
/*   Updated: 2016/12/22 16:04:51 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	x;

	i = 0;
	j = ft_strlen(dst);
	k = ft_strlen(src);
	x = size - j;
	if (size < j + k + 1)
	{
		printf("size too small!\n'dst' = '%s'\n'src' = '%s'\n", dst, src);
		printf("size = %zu\ndst len = '%zu'\nsrc len = '%zu'\n", size, j, k);
		return (size + k + 1);
	}
	if (size - 1 == j)
		return (size + k - 1);
	while (dst[i] != '\0')
	{
		i++;
		size--;
	}
	while (src[i] != '\0' && (size - j - 1) > 0)
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	dst[i] = '\0';
	printf("inside ft_strlcat = '%s\n'", dst);
	return (j + k);
}


int		main(void)
{
	char	s1[] = "hello"; // len = 6;	dst;
	char	s2[] = "1";		//	len = 1; src;
	size_t	i;				// size = 2;

	i = 6;
	printf("Your ftn = '%zu'\n", ft_strlcat(s1, s2, i));
	printf("Built In = '%zu'\n", strlcat(s1, s2, i));
	return (0);
}

