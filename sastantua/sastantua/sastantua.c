/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 13:26:34 by lzhansha          #+#    #+#             */
/*   Updated: 2019/03/31 13:58:13 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	sastantua(int size)
{
	int n;
	int c;
	int i;


	if (size == 1)
		n = 3;
	else 
		n = size * 2 - i;
	c = n*2+1;
	while (n > 0)
	{ 
		i = 0;
		while (c > i)
		{
		if (c/n+1<i || c/n-1>i)
			ft_putchar(' ');
		else if (c/n-1 == i)
			ft_putchar('/');
		else if (c/2+1 == i)
			ft_putchar('\\');
		else
			ft_putchar('*');
		i++;
		}
		ft_putchar('\n');
		n--;
	}
}

int main()
{
	sastantua(1);
	return (0);
}
