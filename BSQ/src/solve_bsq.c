/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_bsq.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 14:48:05 by gbelfort          #+#    #+#             */
/*   Updated: 2019/05/17 09:20:05 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

int		g_max_i;
int		g_max_j;
int		g_max;
char	g_obs;
char	g_empty;
char	g_full;

int		**convert_string(char *str)
{
	int **new_array;
	int i;
	int j;

	i = 0;
	j = 0;
	new_array = malloc(sizeof(int*) * get_line_count(str));
	while (str[i] != '\n')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
		{
			g_empty = str[i];
			g_obs = str[i + 1];
			g_full = str[i + 2];
			i += 3;
		}
	}
	new_array[j] = malloc(sizeof(int) * g_cols);
	ft_ft_convert(i, j, str, new_array);
	return (new_array);
}

void	populate_matrixes(char *str)
{
	int i;
	int j;

	j = 0;
	i = 0;
	g_o_matrix = convert_string(str);
	g_s_matrix = g_o_matrix;
	while (i < get_line_count(str))
	{
		g_s_matrix[i][0] = g_o_matrix[i][0];
		i++;
	}
	while (j < get_co_count(str))
	{
		g_s_matrix[0][j] = g_o_matrix[0][j];
		j++;
	}
}

void	maximum_entry(void)
{
	int i;
	int j;

	i = 0;
	g_max = 0;
	g_max = g_s_matrix[0][0];
	g_max_i = 0;
	g_max_j = 0;
	while (i < g_lines)
	{
		j = 0;
		while (j < g_cols)
		{
			if (g_max < g_s_matrix[i][j])
			{
				g_max = g_s_matrix[i][j];
				g_max_i = i;
				g_max_j = j;
			}
			j++;
		}
		i++;
	}
}

void	put_bsq(void)
{
	int i;
	int j;

	i = 0;
	while (i < g_lines)
	{
		j = 0;
		while (j < g_cols)
		{
			if ((i > (g_max_i - g_max) && i <= g_max_i) &&
					(j > (g_max_j - g_max) && j <= g_max_j))
				ft_putchar(g_full);
			else if (g_s_matrix[i][j] != 0)
				ft_putchar(g_empty);
			else if (g_s_matrix[i][j] == 0)
				ft_putchar(g_obs);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	solve_bsq(char *str)
{
	int i;
	int j;

	i = 1;
	populate_matrixes(str);
	while (i < get_line_count(str))
	{
		j = 1;
		while (j < get_co_count(str))
		{
			if (g_o_matrix[i][j] == 1)
				g_s_matrix[i][j] = min(g_s_matrix[i][j - 1],
						g_s_matrix[i - 1][j], g_s_matrix[i - 1][j - 1]) + 1;
			else
				g_s_matrix[i][j] = 0;
			j++;
		}
		i++;
	}
	maximum_entry();
	put_bsq();
}
