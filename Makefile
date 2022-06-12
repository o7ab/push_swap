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

SRCS = push_swap.c arg_check.c sort_big.c operations.c operations2.c get_index.c ft_r.c ft_rr.c ft_s.c ft_p.c

OBJS = $(SRCS:.c=.o)

NAME	= push_swap

CFLAGS	= -Wall -Werror -Wextra -g

libft	= ./libft/libft.a

$(NAME)	:
		$(MAKE) -C ./libft
		gcc $(CFLAGS) $(SRCS) -o ${NAME} ${libft}

all	: $(NAME)

clean :
		rm -f $(OBJS)
		$(MAKE) clean -C libft

fclean : clean
		rm -f $(NAME)
		$(MAKE) fclean -C libft

re : fclean all
