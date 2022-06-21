# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/14 16:31:04 by ikalakhi          #+#    #+#              #
#    Updated: 2021/12/13 16:20:23 by ikalakhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = push_swap.c rules.c push_swap_utils.c sorting_utils.c sortme.c \
		external_utils.c less_tan_10_sort_utils.c checking_functions.c \
		big_sort.c big_sort_utils.c

OBJS = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(SRC)
	cc $(CFLAGS) $(SRC) -o $(NAME)
	
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
