# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/16 00:12:58 by lzhansha          #+#    #+#              #
#    Updated: 2019/04/16 19:06:25 by gbelfort         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRCS = src/*.c
HDRS = includes/*.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SRCS) -I $(HDRS) -o $(NAME)

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
