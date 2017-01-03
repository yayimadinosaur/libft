/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 16:16:40 by wfung             #+#    #+#             */
/*   Updated: 2016/12/05 16:37:08 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_isprime(int n)
{
	int i;

	i = 2;
	while (n % i != 0)
	{
		i++;
	}
	return (i);
}

int		ft_atoi(char *str)
{
	int i;
	int nb;

	i = 0;
   while (str[i] >= '0' && str[i] <= '9')
   {
	   nb = nb * 10 + (str[i] - 48);
	   i++;
   }
	return (nb);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("Input = %i\nResult = %i\n", ft_atoi(argv[1]), ft_isprime(ft_atoi(argv[1])));
	}
	else
		printf("Wrong # of Inputs\n");
	return (0);
}
