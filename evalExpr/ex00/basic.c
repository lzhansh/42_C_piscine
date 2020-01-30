/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 13:44:50 by lzhansha          #+#    #+#             */
/*   Updated: 2019/04/14 23:26:41 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	unsigned int n;

	if (num < 0)
	{
		ft_putchar('-');
		n = -1 * num;
	}
	else
		n = num;
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int		ft_len(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

int		ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		do_op(int a, int b, char c)
{
	int res;

	res = 0;
	if (c == '+')
		res = a + b;
	if (c == '-')
		res = a - b;
	if (c == '/')
		res = a / b;
	if (c == '*')
		res = a * b;
	if (c == '%')
		res = a % b;
	return (res);
}
