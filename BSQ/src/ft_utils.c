/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 14:49:22 by gbelfort          #+#    #+#             */
/*   Updated: 2019/04/17 19:49:56 by gbelfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

int		min(int a, int b, int c)
{
	int m;

	m = a;
	if (m > b)
		m = b;
	if (m > c)
		m = c;
	return (m);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		get_line_count(char *str)
{
	int		i;
	int		j;
	int		result;
	char	*string;

	i = 0;
	j = 0;
	if (!(str[i] >= '0' && str[i] <= '9'))
	{
		ft_putstr("map error\n");
		return (-1);
	}
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	string = malloc(sizeof(char) * (i));
	while (i > 0)
	{
		string[j] = str[j];
		j++;
		i--;
	}
	result = ft_atoi(string);
	free(string);
	return (result);
}

int		get_co_count(char *str)
{
	int i;
	int j;
	int prev;

	i = 0;
	j = 0;
	prev = 0;
	prev = ft_ft_col(str, i, j, prev);
	if (prev == -1)
		return (-1);
	return (prev);
}
