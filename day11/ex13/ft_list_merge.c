/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 20:41:04 by lzhansha          #+#    #+#             */
/*   Updated: 2019/04/10 21:48:06 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *curr;

	curr = *begin_list1;
	if (curr == NULL)
		*begin_list1 = begin_list2;
	else
	{
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = begin_list2;
	}
}
