/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mystack.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 14:28:07 by lzhansha          #+#    #+#             */
/*   Updated: 2019/04/14 23:29:58 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_stack_ch	*new_node_ch(char data)
{
	t_stack_ch *stack_node;

	stack_node = (t_stack_ch *)malloc(sizeof(t_stack_ch));
	stack_node->data = data;
	stack_node->next = NULL;
	return (stack_node);
}

int			isempty_ch(t_stack_ch *s)
{
	return (!s);
}

void		push_ch(t_stack_ch **s, char data)
{
	t_stack_ch *stack_node;

	stack_node = new_node_ch(data);
	if (!(*s))
		*s = stack_node;
	else
	{
		stack_node->next = *s;
		*s = stack_node;
	}
}

char		*pop_ch(t_stack_ch **s)
{
	t_stack_ch	*temp;
	char		*popped;

	popped = (char *)malloc(sizeof(*popped) * 2);
	if (!isempty_ch(*s))
	{
		temp = *s;
		*s = (*s)->next;
		popped[0] = temp->data;
		popped[1] = '\0';
		free(temp);
		return (popped);
	}
	else
		return ("0");
}

char		top_ch(t_stack_ch *s)
{
	if (!isempty_ch(s))
		return (s->data);
	else
		return ('0');
}
