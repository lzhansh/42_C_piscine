/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:56:22 by exam              #+#    #+#             */
/*   Updated: 2019/04/09 11:44:04 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H

# define FT_DO_OP_H
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		ft_check(char *str);
int		ft_sign(char *str);
int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_mul(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);
int		(*g_do_op[5])(int, int);

#endif
