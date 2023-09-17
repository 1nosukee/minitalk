# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wfaouzi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 18:30:20 by wfaouzi           #+#    #+#              #
#    Updated: 2022/11/08 18:37:42 by wfaouzi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS= $(wildcard ft_*.c)

OBJS	= $(SRCS:.c=.o)

NAME= libft.a

CC= cc

CFLAGS	= -Wall -Wextra -Werror

RM = rm -f

all:$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:clean
	$(RM) $(NAME)

re: fclean all
