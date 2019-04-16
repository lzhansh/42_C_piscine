/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:44:50 by lzhansha          #+#    #+#             */
/*   Updated: 2019/04/10 13:54:14 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*last;

	i = 0;
	if (begin_list == NULL)
	{
		return (0);
	}
	last = begin_list;
	while (last->next != NULL)
	{
		last = last->next;
		i++;
	}
	return (i + 1);
}
