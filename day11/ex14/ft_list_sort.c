/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 21:12:00 by lzhansha          #+#    #+#             */
/*   Updated: 2019/04/18 22:25:13 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*curr;
	t_list	*prev;
	void	*data;

	curr = *begin_list;
	while (curr != NULL)
	{
		prev = *begin_list;
		while (prev->next)
		{
			if ((*cmp)(prev->data, prev->next->data) > 0)
			{
				data = prev->data;
				prev->data = prev->next->data;
				prev->next->data = data;
			}
			prev = prev->next;
		}
		curr = curr->next;
	}
}
