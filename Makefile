# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/14 16:31:04 by ikalakhi          #+#    #+#              #
#    Updated: 2022/07/02 12:10:39 by ikalakhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_BNS = checker

SRC = push_swap.c rules.c push_swap_utils.c sorting_utils.c sortme.c \
		external_utils.c checking_functions.c big_sort.c big_sort_utils.c \
		push_to_stack_a_utils.c 

BONUS_SRC = checker.c checker_utils.c get_next_line.c rules.c push_swap_utils.c \
		 sorting_utils.c sortme.c external_utils.c checking_functions.c big_sort.c big_sort_utils.c \
		push_to_stack_a_utils.c

OBJS = $(SRC:.c=.o)
OBJS_BNS = $(BONUS_SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror 

all : $(NAME)
$(NAME): $(OBJS)
	cc $(CFLAGS) $(SRC) -o $(NAME)

bonus : $(NAME_BNS)
$(NAME_BNS): $(OBJS_BNS)
	cc $(CFLAGS) $(BONUS_SRC) -o $(NAME_BNS)

clean:
	rm -f $(OBJS)
	rm -f $(OBJS_BNS)

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME_BNS)

re: fclean all
