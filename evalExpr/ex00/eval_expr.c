/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 13:09:58 by lzhansha          #+#    #+#             */
/*   Updated: 2019/04/14 23:41:21 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_stack_ch *g_ops;
t_stack *g_values;

int		ft_pre(char c)
{
	if (c == '*' || c == '/' || c == '%')
		return (2);
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

void	ft_new(void)
{
	int		val1;
	int		val2;
	char	op;
	int		res;

	val2 = top_int(g_values);
	pop_int(&g_values);
	val1 = top_int(g_values);
	pop_int(&g_values);
	op = top_ch(g_ops);
	pop_ch(&g_ops);
	res = do_op(val1, val2, op);
	push_int(&g_values, res);
}

int		ft_ft(char *str, int i)
{
	int val;

	if (str[i] == '(')
		push_ch(&g_ops, str[i]);
	if (ft_isdigit(str[i]))
	{
		val = 0;
		while (i < ft_len(str) && ft_isdigit(str[i]))
			val = val * 10 + str[i++] - '0';
		push_int(&g_values, val);
	}
	if (str[i] == ')')
	{
		while (!isempty_ch(g_ops) && top_ch(g_ops) != '(')
			ft_new();
		pop_ch(&g_ops);
	}
	if (str[i] == '-' || str[i] == '+' || str[i] == '/'
			|| str[i] == '*' || str[i] == '%')
	{
		while (!isempty_ch(g_ops) && ft_pre(top_ch(g_ops)) >= ft_pre(str[i]))
			ft_new();
		push_ch(&g_ops, str[i]);
	}
	return (i);
}

int		eval_expr(char *str)
{
	int i;

	g_ops = NULL;
	g_values = NULL;
	i = 0;
	while (i < ft_len(str))
	{
		if (str[i] == ' ')
			i++;
		i = ft_ft(str, i);
		i++;
	}
	while (!isempty_ch(g_ops))
		ft_new();
	return (top_int(g_values));
}
