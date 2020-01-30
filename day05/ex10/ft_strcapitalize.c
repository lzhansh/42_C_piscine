/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 15:22:41 by lzhansha          #+#    #+#             */
/*   Updated: 2019/04/02 14:08:51 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] + 'A' - 'a';
			i++;
		}
		if (str[i] == ' ' || (str[i] < 'a' && str[i] > 'z'))
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] + 'A' - 'a';
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] - 'A' + 'a';
		}
		i++;
	}
	return (str);
}
