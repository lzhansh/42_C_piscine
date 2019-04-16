/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 22:37:52 by lzhansha          #+#    #+#             */
/*   Updated: 2019/04/10 19:58:12 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)(void *, void *))
{
	t_list *curr;

	curr = begin_list;
	while (curr != NULL)
	{
		if ((*cmp)(curr->data, data_ref) == 0)
			(*f)(curr->data);
		curr = curr->next;
	}
}
