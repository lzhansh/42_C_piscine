/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 19:07:46 by lzhansha          #+#    #+#             */
/*   Updated: 2019/03/29 23:32:44 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int n;
	int i;

	n = 0;
	i = 0;

	if (str[0] == '-')
	{
		i = 1;
		while (str[i] != '\0')
		{
			n = n * 10 + (str[i] - '0');
			i++;
		}
		n = n * (-1);
	}
	else
	{
		while (str[i] != '\0')
		{
			n = n * 10 + (str[i] - '0');
			i++;
		}
	}
	return (n);
}
