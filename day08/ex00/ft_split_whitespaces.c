/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 10:43:24 by lzhansha          #+#    #+#             */
/*   Updated: 2019/04/05 09:48:41 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_words(char *str)
{
	int count;
	int i;

	count = 0;
	i = 0;
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			count++;
		}
		str++;
	}
	return (count);
}

int		ft_len(char *str, int j)
{
	int len;

	len = 0;
	while (str[j] != '\0' && str[j] != ' ' && str[j] != '\t' && str[j] != '\n')
	{
		j++;
		len++;
	}
	return (len);
}

char	**ft_split_whitespaces(char *str)
{
	char	**w;
	int		i;
	int		j;
	int		k;
	int		count;

	i = 0;
	j = 0;
	count = ft_words(str);
	w = (char**)malloc(sizeof(char*) * (count + 1));
	while (str[j] != '\0' && i < count)
	{
		k = 0;
		while (str[j] == ' ' || str[j] == '\t' || str[j] == '\n')
			j++;
		w[i] = (char*)malloc(sizeof(char) * (ft_len(str, j) + 1));
		while (str[j] != ' ' && str[j] != '\t' && str[j] != '\n'
				&& str[j] != '\0')
			w[i][k++] = str[j++];
		w[i][k] = '\0';
		i++;
	}
	w[i] = 0;
	return (w);
}
