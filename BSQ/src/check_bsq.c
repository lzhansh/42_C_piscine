/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_bsq.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:48:47 by gbelfort          #+#    #+#             */
/*   Updated: 2019/05/17 09:21:38 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

char	g_obs;
char	g_empty;
char	g_full;

int	ft_check(char *str)
{
	int i;

	i = 0;
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (ft_puterror(1));
	while (str[i] != '\n')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
		{
			g_empty = str[i];
			g_obs = str[i + 1];
			g_full = str[i + 2];
			i += 3;
		}
	}
	while (str[i])
	{
		if (!(str[i] == g_empty || str[i] == g_obs || str[i] == '\n'))
			return (ft_puterror(1));
		i++;
	}
	return (0);
}
