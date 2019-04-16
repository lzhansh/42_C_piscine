/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:22:20 by lzhansha          #+#    #+#             */
/*   Updated: 2019/04/10 22:21:36 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*new;
	t_list	*begin;
	int		i;

	i = 2;
	if (ac < 2)
		return (NULL);
	begin = ft_create_elem(av[1]);
	begin->next = NULL;
	while (i < ac)
	{
		new = ft_create_elem(av[i]);
		new->next = begin;
		begin = new;
		i++;
	}
	return (begin);
}
