# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzhansha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/14 12:59:38 by lzhansha          #+#    #+#              #
#    Updated: 2019/04/14 13:03:45 by lzhansha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
SRCS = *.c
HDRS = *.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I $(HDRS) -o $(NAME) $(SRCS)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
