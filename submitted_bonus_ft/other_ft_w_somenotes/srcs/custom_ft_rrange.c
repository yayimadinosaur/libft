/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   custom_ft_rrange.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 19:51:03 by wfung             #+#    #+#             */
/*   Updated: 2016/12/04 19:58:22 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>	/*PRINTF ACCESS FOR TEST */

int        *ft_rrange(int start, int end)
{
	int		i;
	int		len;
	int		*buff;
	
	i = 0;
	len = 1;
	printf("Start = %i, End = %i\n", start, end);
	if (end != start)
	{
		if (end >= start)
			len = end - start + 1;
		else if (end <= start)
			len = start - end + 1;
	}
	printf("LENGTH = %i\n", len);
	buff = (int*)malloc(sizeof(int) * len);
	while (i != len)
	{
		buff[i] = end;
		printf("buff[%i] = %i\n", i, buff[i]);
		if (end >= start)
			end--;
		else if (end <= start)
			end++;
		i++;
	}
	return (buff);
}

/* TEST FOR FT_RRANGE */
int        main(void)
{
	int x;
	int y;

	x = 1;
	y = 0;
	ft_rrange(x, y);
	return (0);
}
