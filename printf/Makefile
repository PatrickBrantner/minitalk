# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbrantne <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 10:13:54 by pbrantne          #+#    #+#              #
#    Updated: 2022/11/09 13:06:56 by pbrantne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

SRC =	ft_printf.c \
	ft_putnbr.c \
	ft_putstr.c \
	ft_putchar.c \
	ft_convert.c \
	ft_convert_lower.c \
	ft_hexptr.c

OBJ = $(SRC:.c=.o)

$(NAME): all

all:
	cc $(CFLAGS) -c $(SRC)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
