/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_primes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 15:22:51 by wfung             #+#    #+#             */
/*   Updated: 2016/12/05 16:16:23 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_find_primes(int nb)
{
	int i;
	int j;

	i = 2;
	j = 0;
	while (i <= 9)
	{
		if (n % i != 0 || n % i == n)
			i++;
		else
			return (0);
	}
}

int		main(void)
{
	int input;

	input = 2;
	printf("The Primes of int %i = %i\n", input, ft_find_primes(input));
	return (0);
}
