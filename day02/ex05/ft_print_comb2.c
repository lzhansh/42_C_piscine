/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 19:51:33 by lzhansha          #+#    #+#             */
/*   Updated: 2019/03/28 00:02:58 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb(void)
{
	char i = '0';
	char j;
	char k;
	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				if (i != '7' || j != '8' || k != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				k++;
			}
			j++;
			k = '0';
		}
		i++;
		j = '0';
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}

