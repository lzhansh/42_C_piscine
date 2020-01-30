/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 14:36:59 by gbelfort          #+#    #+#             */
/*   Updated: 2019/05/17 09:21:25 by lzhansha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

int **g_o_matrix;
int **g_s_matrix;
int g_cols;
int g_lines;

void	ft_strconcat(char *dest, char *src, int *size, int buff_size)
{
	int		i;
	int		c;

	i = 0;
	if ((*size) > buff_size && (*size) % buff_size == 0)
	{
		if (dest[*size - buff_size])
			i = *size - buff_size;
	}
	c = 0;
	while (dest[i])
		i++;
	while (src[c] && c < buff_size)
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	while (c >= 0)
	{
		src[c] = '\0';
		c--;
	}
	dest[i] = '\0';
}

void	ft_check_infinity(int *size, char *str, int buf)
{
	if (*size == buf)
	{
		if (ft_strlen_mod(str) == 0)
		{
			ft_putstr("");
			*size = -1;
		}
	}
}

char	*ft_read(int fd, int buff_size)
{
	char	buff[buff_size + 1];
	char	*str;
	char	*temp;
	int		size;

	size = 0;
	str = (char*)malloc(sizeof(*str) * (size + 1));
	temp = (char*)malloc(sizeof(*str) * (size + 1));
	str[0] = 0;
	temp[0] = 0;
	while (read(fd, buff, buff_size) && str && temp && size >= 0)
	{
		size += buff_size;
		ft_strcpy(temp, str);
		free(str);
		str = (char*)malloc(sizeof(*str) * (size + 1));
		ft_strcpy(str, temp);
		ft_strconcat(str, buff, &size, buff_size);
		str[size] = '\0';
		free(temp);
		temp = (char*)malloc(sizeof(*temp) * (size + 1));
		ft_check_infinity(&size, str, buff_size);
	}
	free(temp);
	return (str);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*str;
	int		fd;

	str = NULL;
	i = 0;
	if (argc != 1)
		while (++i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd > 0)
			{
				str = ft_read(fd, BUFF2);
				ft_ft_main(str);
				close(fd);
			}
			else
				ft_putstr("map error\n");
		}
	else
	{
		str = ft_read(0, BUFF1);
		ft_ft_main(str);
	}
	return (0);
}
