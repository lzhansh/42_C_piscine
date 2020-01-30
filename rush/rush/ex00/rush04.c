/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfedosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 15:06:07 by pfedosse          #+#    #+#             */
/*   Updated: 2019/03/31 20:31:38 by pfedosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	brush(int stolb, int str)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < str)
	{
		y = 0;
		while (y < stolb)
		{
			if ((x == 0 && y == 0) || (x == str - 1 && y == stolb - 1))
				ft_putchar('A');
			else if ((x == 0 && y == stolb - 1) ||
					(x == str - 1 && y == 0))
				ft_putchar('C');
			else if ((x == 0) || (x == str - 1) ||
					(y == 0) || (y == stolb - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			y++;
		}
		x++;
		ft_putchar('\n');
	}
}

void	rush(int stolb, int str)
{
	if (stolb <= 0 || str <= 0)
	{
		write(1, "pls write > 0\n", 14);
		return ;
	}
	brush(stolb, str);
}
