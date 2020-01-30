/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mystack.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 14:28:07 by lzhansha          #+#    #+#             */
/*   Updated: 2019/04/14 21:03:47 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_stack *newNodeInt(int data)
{
	t_stack *stackNode = (t_stack *)malloc(sizeof(t_stack));
	stackNode->data = data;
	stackNode->next = NULL;
	stackNode = NULL;
	return (stackNode);
}

int		isemptyInt(t_stack *s)
{
	return (!s);
}

void	pushInt(t_stack **s, int data)
{
	t_stack *stackNode = newNodeInt(data);
	stackNode->next = *s;
	*s = stackNode;
}

void	popInt(t_stack **s)
{
	t_stack *temp;
	int popped;

	temp = *s;
	*s = (*s)->next;
	popped = temp->data;
	temp = NULL;
	if (temp != NULL)
		free(temp);
}

int		topInt(t_stack *s)
{
	return (s->data);
}
