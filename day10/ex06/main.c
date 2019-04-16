/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 23:04:47 by lzhansha          #+#    #+#             */
/*   Updated: 2019/04/09 11:47:42 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	ft_zero(char *str1, char *str2)
{
	if (str1[0] == '/' && str2[0] == '0')
		write(1, "Stop: division by zero", 22);
	else if (str1[0] == '%' && str2[0] == '0')
		write(1, "Stop: modulo by zero", 20);
	else
		return (1);
	write(1, "\0", 1);
	return (0);
}

int	main(int argc, char **argv)
{
	int res;
	int n1;
	int n2;

	g_do_op[0] = ft_add;
	g_do_op[1] = ft_sub;
	g_do_op[2] = ft_mul;
	g_do_op[3] = ft_div;
	g_do_op[4] = ft_mod;
	if (argc == 4)
	{
		if (ft_zero(argv[2], argv[3]) == 0)
			return (0);
		n1 = ft_check(argv[1]);
		n2 = ft_check(argv[3]);
		if ((n1 == 0 && n2 == 0) || ft_sign(argv[2]) == -1)
			write(1, "0", 1);
		else
		{
			res = (*g_do_op[ft_sign(argv[2])])(n1, n2);
			ft_putnbr(res);
		}
		write(1, "\n", 1);
	}
	return (0);
}
