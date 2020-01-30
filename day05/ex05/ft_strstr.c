/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 17:46:07 by lzhansha          #+#    #+#             */
/*   Updated: 2019/04/02 00:58:03 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *start;
	char *pat;

	if (!*to_find)
		return (str);
	while (*str)
	{
		start = str;
		pat = to_find;
		while (*str && *pat && *str == *pat)
		{
			str++;
			pat++;
		}
		if (!*pat)
			return (start);
		str = start + 1;
	}
	return (0);
}
