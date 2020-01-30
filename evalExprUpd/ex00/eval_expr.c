/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 13:09:58 by lzhansha          #+#    #+#             */
/*   Updated: 2019/04/14 21:26:25 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int ft_pre(char c)
{
	if (c == '*' || c == '/' || c == '%')
		return (2);
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

int		eval_expr(char *str)
{
	int i;
	int len;
	int val, val1, val2;
	char op;
	int res;
	t_stack_ch *ops;
	t_stack *values;

	len = ft_len(str);
	i = 0;
	while (i < len)
	{
		if (str[i] == ' ')
			i++;
		if (str[i] == '(')
			pushCh(&ops, str[i]);
		else if (ft_isdigit(str[i]))
		{
			val = 0;
			while (i < len && ft_isdigit(str[i]))
			{
				val = val * 10 + str[i] - '0';
				i++;
			}
			pushInt(&values, val);
		}
		else if (str[i] == ')')
		{
			while (!isemptyCh(ops) && topCh(ops) != '(')
			{
				val2 = topInt(values);
				popInt(&values);
				val1 = topInt(values);
				popInt(&values);
				op = topCh(ops);
				popCh(&ops);
				res = do_op(val1, val2, op);
				pushInt(&values, res);
			}
			popCh(&ops);
		}
		else 
		{
			while (!isemptyCh(ops) && ft_pre(topCh(ops)) >= ft_pre(str[i]))
			{
				val2 = topInt(values);
				popInt(&values);
				val1 = topInt(values);
				popInt(&values);
				op = topCh(ops);
				popCh(&ops);
				res = do_op(val1, val2, op);
				pushInt(&values, res);
			}
			pushCh(&ops, str[i]);
		}
	}
	return (topInt(values));
}
