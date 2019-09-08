# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecelsa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/16 22:34:37 by ecelsa            #+#    #+#              #
#    Updated: 2019/07/16 23:35:15 by ecelsa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCSDIR = srcs/
SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_swap.c ft_strlen.c
QLIST = $(SRCS:.c=.o)
RM = /bin/rm
INCLUDES = includes/

all: $(NAME)

$(NAME):
	@$(CC) $(CLAGS) -c $(addprefix $(SRCSDIR), $(SRCS)) -I $(INCLUDES)
	@ar rc $(NAME) $(QLIST)
	
clean:
	@$(RM) -f $(QLIST)

fclean: clean
	@$(RM) -f $(NAME)

re: fclean all
