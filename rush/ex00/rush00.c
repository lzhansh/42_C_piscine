/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfedosse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 11:06:48 by pfedosse          #+#    #+#             */
/*   Updated: 2019/04/02 19:15:54 by lzhansha         ###   ########.fr       */
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
			if ((x == 0 && y == 0) || (x == 0 && y == stolb - 1) ||
					(x == str - 1 && y == 0) ||
					(x == str - 1 && y == stolb - 1))
				ft_putchar('o');
			else if ((y == stolb - 1) || (y == 0))
				ft_putchar('|');
			else if ((x == str - 1) || (x == 0))
				ft_putchar('-');
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
