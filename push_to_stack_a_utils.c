/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_stack_a_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:53:34 by ikalakhi          #+#    #+#             */
/*   Updated: 2022/06/24 14:53:39 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int find_twin_num(t_list **stack_b, int top_a)
{
    int     i;
    int     j;
    t_list  *temp;

    i = 0;
    j = -2;
    temp = (*stack_b);
    while (temp)
    {
        if (temp->index == top_a)
        {
            j = i;
            return(j);
        }
        temp = temp->next;
    }
    return(j);
}

void    roll(t_list **stack_a, t_list **stack_b, int pos, int size)
{
    pos = find_twin_num(stack_b, top_a);
    if (pos >= size / 2)
	{
		up_rolling(stack_b);
		p(stack_a, stack_b, pos, size, 'a');
	}
	else if (pos < size / 2)
	{
		down_rolling(stack_b);
		p(stack_a, stack_b, size, 'a');
	}
}

int	top_stack(t_list **stack)
{
	int top;

	top = (*stack)->index;
	return (top);
}

t_list  bring_last(t_list **stack)
{
    while ((*stack))
    {
        (*stack) = (*stack)->next;
    }
    return((*stack)->index);
}

void    intialize_last(t_list **stack)
{
    while((*stack_a))
	{
		if ((*stack_a)->next == NULL)
			(*stack_a)->index = -1;
		(*stack_a) = (*stack_a)->next;
	}
}