# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tobarite <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/18 20:44:09 by tobarite          #+#    #+#              #
#    Updated: 2019/06/22 18:01:07 by tobarite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = ./srcs/
HEADER =./includes/
NAME = libft.a
FLAGS = -Wall -Wextra -Werror
FICHIERS = $(SOURCES)ft_putchar.c $(SOURCES)ft_putstr.c $(SOURCES)ft_strcmp.c $(SOURCES)ft_strlen.c $(SOURCES)ft_swap.c

RESIDUEL = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all:	
		make libft.a

$(NAME):
		gcc $(FLAGS) -c -I $(HEADER) $(FICHIER)
		ar rc $(NAME) *.o
		ranlib $(NAME)

fclean:
		make clean
		/bin/rm $(NAME)

clean:
		/bin/rm -rf $(RESIDUEL)

re:
		fclean
		all
