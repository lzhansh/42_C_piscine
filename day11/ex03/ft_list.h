/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:40:40 by lzhansha          #+#    #+#             */
/*   Updated: 2019/04/10 12:57:26 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H

# define FT_LIST_H
# include <stdlib.h>

typedef struct s_list	t_list;

struct	s_list
{
	void	*data;
	t_list	*next;
};

t_list	*ft_create_elem(void *data);
int		ft_list_size(t_list *begin_list);

#endif
