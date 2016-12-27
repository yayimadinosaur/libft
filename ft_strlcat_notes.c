/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 16:53:09 by wfung             #+#    #+#             */
/*   Updated: 2016/12/26 19:35:33 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;		//counter for dst vs size
	size_t	j;		//counter for src
	size_t	k;		//strlen src
	size_t	p;		//strlen dst

	i = 0;
	j = 0;
	k = ft_strlen(dst);
	p = ft_strlen(src);
//	printf("qtest src = '%s'\n", src);
//	printf("qtest dst = '%s'\n", dst);
//	printf("qtest size = '%zu'\n", size);
	while (i <= k && i < size && dst[i] != '\0')
	{
		i++;
	}
	if (size <= k)
	{
//		printf("no append\n");
		return (i + p);
/*		if (size > i)
		{
			printf("1.if > if\nsize > i\n%zu > %zu\n", size, i);
			return (i + p);
		}
		else if (size <= i)
		{
			printf("2.if > else\nsize <= i\n%zu <= %zu\n", size, i);
			return (i + p);
		}
*/	}
	while (src[j] != '\0' && j < size - k - 1)
	{
//		printf("appended dst = '%s'\ni = '%zu'\nj = '%zu'\n", dst, i, j);
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
//	printf("dst new = '%s'\n", dst);
	return (k + p);
}

/*
int		main(void)
{
	char	s1[20] = "Hello "; 			//dst - you;
	char	s2[20] = "";		//src - you;
	char	s1_1[20] = "Hello ";		//dst - lib;
	char	s2_1[20] = "";	//dst - lib;
	size_t	i;					//size;

	i = 0;
	printf("dst len = %zu\nsrc len = %zu\ninput = %zu\n", ft_strlen(s1), ft_strlen(s2), i);
	printf("---------------------------------\n");
	printf("dst len = %zu\nsrc len = %zu\ninput = %zu\n", ft_strlen(s1_1), ft_strlen(s2_1), i);
	printf("[Your ftn = '%zu']\n", ft_strlcat(s1, s2, i));
	printf("your ft dst = '%s'\n", s1);
	printf("[Built In = '%zu']\n", strlcat(s1_1, s2_1, i));
	printf("builtin dst = '%s'\n", s1_1);
	return (0);
}




qtest used

src = "Hello ";
dst = "";
size = 4;

src = "Hello ";
dst = "Hel";
size = 1;

src = "abc";
dst = "Hel";
size = 6;
*/
