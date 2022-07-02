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

NAME_BNS = checker

SRC = push_swap.c rules.c push_swap_utils.c sorting_utils.c sortme.c \
		external_utils.c checking_functions.c big_sort.c big_sort_utils.c \
		push_to_stack_a_utils.c 

BONUS_SRC = checker.c checker_utils.c get_next_line.c rules.c push_swap_utils.c\
		 sorting_utils.c sortme.c external_utils.c checking_functions.c big_sort.c big_sort_utils.c \
		push_to_stack_a_utils.c

OBJS = $(SRC:.c=.o)
OBJS_BNS = $(BONUS_SRC:.c=.o)
CFLAGS = -fsanitize=address -Wall -Wextra -Werror 
#
all : $(NAME)

bonus : $(NAME_BNS)

$(NAME): $(SRC)
	cc $(CFLAGS) $(SRC) -o $(NAME)

$(NAME_BNS): $(BONUS_SRC)
	cc $(CFLAGS) $(BONUS_SRC) -o $(NAME_BNS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
