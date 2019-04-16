/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 17:12:48 by lzhansha          #+#    #+#             */
/*   Updated: 2019/04/04 10:40:20 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_len(int argc, char **argv)
{
	int i;
	int j;
	int num;

	i = 0;
	num = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			num++;
			j++;
		}
		i++;
	}
	return (num);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*c;
	int		i;
	int		j;
	int		k;
	int		num;

	i = 1;
	k = 0;
	num = ft_len(argc, argv);
	c = (char *)malloc(sizeof(char) * (num + 1));
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			c[k++] = argv[i][j++];
		if (i + 1 < argc)
			c[k] = '\n';
		i++;
		k++;
	}
	c[k] = '\0';
	return (c);
}
