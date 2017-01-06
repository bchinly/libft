# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bchin <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 10:39:27 by bchin             #+#    #+#              #
#    Updated: 2016/11/09 18:53:14 by bchin            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
SRCS=srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c srcs/ft_putnbr.c srcs/ft_atoi.c 
OBJS=ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o ft_putnbr.o ft_atoi.o 

all: $(NAME)

$(NAME):
	$(CC) -c $(SRCS) -Iincludes
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	-rm -f $(OBJS)

fclean: clean
	-rm -f $(NAME)

re: fclean all
		
