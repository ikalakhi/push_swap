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

NAME = push_swap.a 

SRC = push_swap.c rules.c push_swap_utils.c external_functions.c

OBJS = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME):
	cc $(CFLAGS) -c $(SRC)
	ar -rcs $(NAME) $(OBJS)
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
