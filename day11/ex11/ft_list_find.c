/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 19:48:36 by lzhansha          #+#    #+#             */
/*   Updated: 2019/04/10 19:54:31 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *curr;

	curr = begin_list;
	while (curr != NULL)
	{
		if ((*cmp)(curr->data, data_ref) == 0)
			return (curr);
		curr = curr->next;
	}
	return (NULL);
}
