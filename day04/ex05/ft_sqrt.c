/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 17:07:38 by lzhansha          #+#    #+#             */
/*   Updated: 2019/03/30 21:26:11 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int res;
	int i;

	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (nb);
	else
	{
		res = 1;
		i = 1;
		while (nb > res)
		{
			res = i * i;
			i++;
		}
		i -= 1;
		if (nb != i * i)
			return (0);
		else
			return (i);
	}
}
