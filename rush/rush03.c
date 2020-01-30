/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 14:11:30 by lzhansha          #+#    #+#             */
/*   Updated: 2019/03/30 16:48:01 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

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

int		rush(int x, int y)
{
	int i;
	int j;

	j = 1;
	if (x == 0 || y == 0)
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
		ft_top(x);
	return (0);
}

int		main(void)
{
	rush(1, 5);
	return (0);
}
