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

void	sort_big_stack(t_list **stack_a, t_list **stack_b, int ac)
{
    char    *s;//sorted stack
	int	    b;
	int	    min;
	int	    mid;
	int	    size;

    put_index(stack_a, ac);
	b = dividing(ac, b); 
	while (ac >= 0)
	{
		ac = ac / b;
		
    }
	free (s);
}

int dividing(int ac, int b)
{
	if (ac > 10 && ac <= 100)
		b = 4;
	else if (ac > 100)
		b = 8;
	return (b);
}
