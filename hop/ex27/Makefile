# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecelsa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/18 21:30:16 by ecelsa            #+#    #+#              #
#    Updated: 2019/07/18 21:38:46 by ecelsa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
GC = gcc
GCCFLAGS = -Wall -Wextra -Werror -o
OBJ = main.c

all:
	$(GC) $(GCCFLAGS) $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

