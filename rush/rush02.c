/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 14:11:30 by lzhansha          #+#    #+#             */
/*   Updated: 2019/03/30 15:48:34 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < y){
		while (i < x) {
			if ((i == 0 && j == 0) || (i == x - 1 && j == 0))
				ft_putchar('A');
			else if ((i == 0 && j == y - 1) || (i == x - 1 && j == y - 1))
				ft_putchar('C');
			else if ((i == 0 && j > 0 && j < y - 1)	|| (j == 0 && i > 0 && i < x - 1)
|| (i == x-1 && j > 0 && j < y - 1) || (j == y - 1 && i > 0 && i < x - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		i = 0;
		ft_putchar('\n');
		j++;
	}
}

int main()
{
	rush(5, 5);
	return (0);
}
