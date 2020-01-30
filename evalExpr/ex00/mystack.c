/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mystack.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 14:28:07 by lzhansha          #+#    #+#             */
/*   Updated: 2019/04/14 23:26:23 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_stack		*new_node_int(int data)
{
	t_stack *stack_node;

	stack_node = (t_stack *)malloc(sizeof(t_stack));
	stack_node->data = data;
	stack_node->next = NULL;
	return (stack_node);
}

int			isempty_int(t_stack *s)
{
	return (!s);
}

void		push_int(t_stack **s, int data)
{
	t_stack *stack_node;

	stack_node = new_node_int(data);
	if (!(*s))
		*s = stack_node;
	else
	{
		stack_node->next = *s;
		*s = stack_node;
	}
}

int			*pop_int(t_stack **s)
{
	t_stack	*temp;
	int		*popped;

	popped = (int *)malloc(sizeof(*popped) * 2);
	if (!isempty_int(*s))
	{
		temp = *s;
		*s = (*s)->next;
		popped[0] = temp->data;
		popped[1] = '\0';
		free(temp);
		return (popped);
	}
	else
		return (0);
}

int			top_int(t_stack *s)
{
	if (!isempty_int(s))
		return (s->data);
	else
		return (0);
}
