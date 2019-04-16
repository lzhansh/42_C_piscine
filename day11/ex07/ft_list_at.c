/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 21:35:59 by lzhansha          #+#    #+#             */
/*   Updated: 2019/04/10 14:45:07 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*curr;
	unsigned int	i;

	i = 0;
	if (begin_list == NULL)
		return (NULL);
	curr = begin_list;
	while (i < nbr && curr != NULL)
	{
		curr = curr->next;
		i++;
	}
	return (curr);
}
