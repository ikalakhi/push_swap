/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:07:19 by ikalakhi          #+#    #+#             */
/*   Updated: 2022/06/27 17:07:22 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int main (int ac, char **av)
{
    t_list	*stack_a;
	t_list	*stack_b;
	int		i;
	char	*s;

	intialize(&stack_a, &stack_b);
	creat_stack(ac, av, &stack_a);
	i = check_numbers(av, ac);
    if (i == 0)
        erreur();
	s = get_next_line();
    if (ac > 1 && i == 1 && check_dup())
    {
		
    }
	check_if_sorted(&stack_a);
}