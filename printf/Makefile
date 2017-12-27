# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpalmier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/27 16:43:48 by cpalmier          #+#    #+#              #
#    Updated: 2017/12/27 14:22:52 by mpasquie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= printf

SRC		= main.c \

OBJ		= $(SRC:.c=.o)

INCLUDE	= printf.h \
		  libft/libft.h

.PHONY : all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	make -C Libft
	gcc -Wall -Werror -Wextra $(OBJ) Libft/Libft.a -o $(NAME)

./%.o: src/%.c
	gcc -Wall -Wextra -Werror -c $< -o $@

clean:
	rm -rf $(OBJ)
	make -C Libft clean

fclean: clean
	rm -f $(NAME)
	make -C Libft fclean

re: fclean all
	make -C Libft re
