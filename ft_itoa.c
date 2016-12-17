/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 16:51:47 by wfung             #+#    #+#             */
/*   Updated: 2016/12/16 16:21:35 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_int(int nb)
{
	int len_int;

	len_int = 0;
	if (nb < 0)
	{
		len_int++;
		nb = nb * -1;
	}
	else if (nb == 0)
		len_int++;
	else
	{
		while (nb > 0)
		{
			len_int++;
			nb = nb / 10;
		}
	}
	return (len_int);
}

static char	*ft_strrev_w_neg(char *str)
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

char		*ft_itoa(int n)
{
	int		i;
	char	*buff;

	i = 0;
	buff = (char*)malloc(sizeof(char) * ft_len_int(n) + 1);
	if (n < 0)
	{
		buff[i] = '-';
		i++;
		n = -n;
	}
	else if (n == 0)
	{
		buff[i] = 48;
		i++;
	}
	while (n > 0)
	{
		buff[i] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	buff[i] = '\0';
	ft_strrev_w_neg(buff);
	return (buff);
}
