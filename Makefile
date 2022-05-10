# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oabushar <oabushar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 18:46:21 by oabushar          #+#    #+#              #
#    Updated: 2022/05/09 20:06:54 by oabushar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = push_swap.c

OBJS = $(SRCS:.c=.o)

NAME	= push_swap

CFLAGS	= -Wall -Werror -Wextra -g

libft	= ./libft/libft.a

$(NAME)	:
		make -C ./libft
		gcc $(CFLAGS) $(libft) -o push_swap $(SRCS)

all	: $(NAME)

clean :
		rm -f $(OBJS)
		make clean -C libft

fclean : clean
		rm -f $(NAME)
		make clean -C libft

re : fclean all
