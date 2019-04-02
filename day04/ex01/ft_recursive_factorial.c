/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 12:04:00 by lzhansha          #+#    #+#             */
/*   Updated: 2019/03/30 20:12:33 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int res;

	res = 1;
	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	else if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}
