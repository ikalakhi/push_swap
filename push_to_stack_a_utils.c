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
        i++;
        temp = temp->next;
    }
    return(j);
}

void    roll(t_list **stack_a, t_list **stack_b, int pos, int size)
{
    printf("wach a saiide\n");
    if (pos >= size / 2)
	{
		up_rolling(stack_b, pos, size, 'b');
		pa(stack_a, stack_b, 'a');
	}
	else if (pos < size / 2)
	{
		down_rolling(stack_b, size, 'b');
		pa(stack_a, stack_b, 'a');
	}
}

int	top_stack(t_list **stack)
{
	int top;

	top = (*stack)->index;
	return (top);
}

int bring_last(t_list **stack)
{
    while ((*stack))
    {
        if ((*stack)->next == NULL)
            return((*stack)->index);
        (*stack) = (*stack)->next;
    }
    return(-1);
}

void    intialize_last(t_list **stack)
{
    t_list *temp;

    temp = (*stack);
    while(temp)
	{
		if (temp->next == NULL)
			temp->index = -1;
		temp = temp->next;
	}
}