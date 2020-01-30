/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 14:45:38 by gbelfort          #+#    #+#             */
/*   Updated: 2019/04/17 21:23:49 by gbelfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <time.h>
# include <fcntl.h>

# define BUFF1 1000000
# define BUFF2 8000000

extern int **g_o_matrix;
extern int **g_s_matrix;
extern int g_cols;
extern int g_lines;
extern int g_max;
extern int g_max_i;
extern int g_max_j;
extern char g_obs;
extern char g_full;
extern char g_empty;

int		ft_ft_main(char *str);
int		ft_ft_col(char *str, int i, int j, int prev);
int		**ft_ft_convert(int i, int j, char *str, int **new_array);
int		ft_puterror(int a);
int		ft_strlen_mod(char *str);
void	ft_strcpy(char *s1, char *s2);
int		min(int a, int b, int c);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(const char *str);
int		get_line_count(char *str);
int		get_co_count(char *str);
int		**convert_string(char *str);
int		ft_check(char *str);
void	solve_bsq(char *str);

#endif
