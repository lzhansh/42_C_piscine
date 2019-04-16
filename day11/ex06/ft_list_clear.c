/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 21:18:37 by lzhansha          #+#    #+#             */
/*   Updated: 2019/04/10 20:10:16 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *next;
	t_list *curr;

	curr = *begin_list;
	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
	*begin_list = NULL;
}
