# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/23 00:41:13 by wfaouzi           #+#    #+#              #
#    Updated: 2023/09/14 05:43:49 by wfaouzi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = server.c client.c
OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror


all: server client

server: server.o libft
	

client: client.o libft
	

libft:
	@make all -C ./libft/

clean:
	rm -f $(OBJECTS)
	make -C libft clean

fclean: clean
	rm -f server client
	make -C libft fclean

re: fclean all

.PHONY: all bonus libft clean fclean re
