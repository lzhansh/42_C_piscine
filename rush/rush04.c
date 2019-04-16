/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfedosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 15:06:07 by pfedosse          #+#    #+#             */
/*   Updated: 2019/03/31 22:09:12 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_top(int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('A');
		else if (i == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
	ft_putchar('\n');
}

void	ft_btm(int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('C');
		else if (i == x - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		i++;
	}
	ft_putchar('\n');
}

int		rush(int x, int y)
{
	int i;
	int j;

	j = 1;
	if (x <= 0 || y <= 0)
		return (0);
	ft_top(x);
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if ((i == 0 && j < y - 1) || (i == x - 1 && j < y - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		if (j != y - 2)
			ft_putchar('\n');
		j++;
	}
	if (j > 1)
		ft_btm(x);
	return (0);
}
