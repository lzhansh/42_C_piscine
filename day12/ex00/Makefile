# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/10 17:21:12 by lzhansha          #+#    #+#              #
#    Updated: 2019/04/10 19:25:23 by lzhansha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRCS = ft_display_file.c
HDRS = ft_files.h

all: ft_disp

ft_disp:
	gcc -Wall -Wextra -Werror -I $(HDRS) -o $(NAME) $(SRCS)

clean:
	/bin/rm -rf $(NAME)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

