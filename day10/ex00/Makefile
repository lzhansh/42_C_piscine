# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/08 13:07:55 by lzhansha          #+#    #+#              #
#    Updated: 2019/04/29 14:44:07 by lzhansha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = srcs/ft*.c
HDRS = includes

all: make_lib

make_lib:
	gcc -Wall -Wextra -Werror -I $(HDRS) -c $(SRCS)
	ar rc $(NAME) ft*.o
	ranlib $(NAME)

clean:
	/bin/rm -f ft*.o

fclean: clean
	/bin/rm -f $(NAME)

re:	fclean all
