# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/08 13:07:55 by lzhansha          #+#    #+#              #
#    Updated: 2019/04/09 11:49:51 by lzhansha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
HDRS = do_op.h
SRCS = do_op.c main.c ft_ft.c

all: comp

comp:
	gcc -Wall -Wextra -Werror -I $(HDRS) -o $(NAME) $(SRCS)

clean:
	/bin/rm -f $(NAME)

re:	clean all
