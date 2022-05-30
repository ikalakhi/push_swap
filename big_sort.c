/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:16:25 by ikalakhi          #+#    #+#             */
/*   Updated: 2022/05/27 15:16:29 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int dividing(int ac, int b)
{
	if (ac >= 250 && ac < 350)
		b = 6;
	else if (ac > 100)
		b = 5;
	if (ac <= 100)
		b = 3;
	return (b);
}

void	sort_big_stack(t_list **stack_a, t_list **stack_b, int ac)
{
    char    *s;//sorted stack
	int	    b;
	int	    min;
	int	    mid;
	int	    size;

	b = 1;
    s = swap_to_arry(stack_a, s, ac);
	ac = ac / 4;
	while (stack_a)
	{

    }
	free (s);
}

