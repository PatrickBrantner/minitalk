# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbrantne <pbrantne@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 15:48:56 by pbrantne          #+#    #+#              #
#    Updated: 2022/12/23 16:24:29 by pbrantne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

LIBFT = ./libft/libft.a
PRINTF = ./printf/libftprintf.a
CLIENT = client
SERVER = server

SRC_C = client.c
OBJ_C = $(SRC_C:.c=.o)
SRC_S = server.c
OBJ_S = $(SRC_S:.c=.o)

all: $(SERVER) $(CLIENT)

$(LIBFT):
	@$(MAKE) -C ./libft

$(PRINTF):
	@$(MAKE) -C ./printf

$(SERVER): $(OBJ_S) $(LIBFT) $(PRINTF)
	@$(CC) $(CFLAGS) $(OBJ_S) $(LIBFT) $(PRINTF) -o server

$(CLIENT): $(OBJ_C) $(LIBFT) $(PRINTF)
	@$(CC) $(CFLAGS) $(OBJ_C) $(LIBFT) $(PRINTF) -o client

clean:
	@$(MAKE) clean -C ./libft
	@$(MAKE) clean -C ./printf
	@$(RM) $(OBJ_C) $(OBJ_S)

fclean: clean
	@$(MAKE) fclean -C ./libft
	@$(MAKE) fclean -C ./printf
	@$(RM) $(SERVER) $(CLIENT)

re: fclean all