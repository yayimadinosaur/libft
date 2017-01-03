/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 14:27:03 by wfung             #+#    #+#             */
/*   Updated: 2016/12/05 15:22:32 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_find_prime(int n)
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
	i = 2;
	while (n >= 2)
	{
		if (n % i != 0 | n % i == 1)
			j = j + (n % i);
		n--;
		i = n;
	}
	return (j);
}

int		ft_atoi(char *str)
{
	int i;
	int nb;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 47 || str[i] > 58)
			return (0);
		if (str[i] >= '0' && str[i] <= '9')
			nb = nb * 10 + (str[i] + 48); 
		i++;
	}
	return (nb);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else if (n >= 0 && n <= 9)
		ft_putchar(n + 48);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('0');
		ft_putchar('\n');
	}
	else if (argc == 2)
	{
		if (argv[1] < 0)
		{
			ft_putchar('0');
			ft_putchar('\n');
		}
		else
		{
			ft_putnbr(ft_find_prime(ft_atoi(argv[1])));
			ft_putchar('\n');
		}
	}
	return (0);
}
