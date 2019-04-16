/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:48:59 by lzhansha          #+#    #+#             */
/*   Updated: 2019/04/09 11:22:32 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int res;
	int i;
	int s;

	i = 0;
	res = 0;
	s = 1;
	if (str[i] == '-' || str[i] == '+' || str[i] < '0' || str[i] > '9')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * s);
}

void	ft_putnbr(int nb)
{
	unsigned int n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -1 * nb;
	}
	else
		n = nb;
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int		ft_check(char *str)
{
	char	num[10];
	int		i;

	i = 0;
	while ((str[i] && str[i] <= '9' && str[i] >= '0')
			|| str[i] == '-' || str[i] == '+')
	{
		num[i] = str[i];
		i++;
	}
	num[i] = '\0';
	return (ft_atoi(num));
}

int		ft_sign(char *str)
{
	if (str[0] == '+')
		return (0);
	else if (str[0] == '-')
		return (1);
	else if (str[0] == '*')
		return (2);
	else if (str[0] == '/')
		return (3);
	else if (str[0] == '%')
		return (4);
	else
		return (-1);
	return (-1);
}
