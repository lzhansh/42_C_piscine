/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mystack.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 14:28:07 by lzhansha          #+#    #+#             */
/*   Updated: 2019/04/14 21:16:46 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_stack_ch *newNodeCh(char data)
{
	t_stack_ch *stackNode;
   
	stackNode = (t_stack_ch *)malloc(sizeof(t_stack_ch));
	stackNode->data = data;
	stackNode->next = NULL;
	return (stackNode);
}

int		isemptyCh(t_stack_ch *s)
{
	return (!s);
}

void	pushCh(t_stack_ch **s, char data)
{
	t_stack_ch *stackNode = newNodeCh(data);
	stackNode->next = *s;
	*s = stackNode;
}

void	popCh(t_stack_ch **s)
{
	t_stack_ch *temp;
	char popped;

	temp = *s;
	*s = (*s)->next;
	popped = temp->data;
	if (temp != NULL)
		free(temp);
}

char	topCh(t_stack_ch *s)
{
	return (s->data);
}
