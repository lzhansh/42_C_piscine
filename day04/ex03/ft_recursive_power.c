/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 01:58:11 by lzhansha          #+#    #+#             */
/*   Updated: 2019/03/30 21:35:36 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power > 31)
		return (-1);
	else if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (1);
}
