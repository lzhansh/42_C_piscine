/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 19:55:23 by lzhansha          #+#    #+#             */
/*   Updated: 2019/04/10 20:39:11 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *curr;
	t_list *prev;

	prev = NULL;
	curr = *begin_list;
	while (curr != NULL)
	{
		if ((*cmp)(curr->data, data_ref) == 0)
		{
			if (curr == *begin_list)
				*begin_list = curr->next;
			else
				prev->next = curr->next;
			free(curr);
			curr = curr->next;
		}
		else
		{
			prev = curr;
			curr = curr->next;
		}
	}
}
