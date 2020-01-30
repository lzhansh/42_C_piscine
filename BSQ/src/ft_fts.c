/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fts.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 19:33:33 by gbelfort          #+#    #+#             */
/*   Updated: 2019/04/17 21:22:04 by gbelfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

int	**ft_ft_convert(int i, int j, char *str, int **new_array)
{
	int k;

	while (str[i + 1])
	{
		k = 0;
		if (str[i] == '\n')
		{
			new_array[j] = malloc(sizeof(int) * g_cols);
			i++;
		}
		while (k < g_cols)
		{
			if (str[i] == g_empty)
				new_array[j][k++] = 1;
			else if (str[i] == g_obs)
				new_array[j][k++] = 0;
			else if (str[i] == '\n')
				k++;
			i++;
		}
		j++;
	}
	return (new_array);
}

int	ft_ft_col(char *str, int i, int j, int prev)
{
	int result;

	result = 0;
	while (str[i] != '\n')
		i++;
	i++;
	while (j < g_lines)
	{
		if (prev != result)
			return (ft_puterror(-1));
		result = 0;
		while (str[i] != '\n')
		{
			result++;
			i++;
		}
		if (prev == 0)
			prev = result;
		j++;
		if (j + 1 < g_lines)
			i++;
	}
	return (prev);
}

int	ft_ft_main(char *str)
{
	if (ft_check(str) == 1)
		return (0);
	g_lines = get_line_count(str);
	if (g_lines == -1)
		return (0);
	g_cols = get_co_count(str);
	if (g_cols == -1)
		return (0);
	if (g_lines < 1 || g_cols < 1)
	{
		ft_putstr("map error\n");
		return (0);
	}
	solve_bsq(str);
	return (1);
}
