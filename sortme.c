/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortme.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:26:05 by ikalakhi          #+#    #+#             */
/*   Updated: 2022/04/19 21:26:08 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void    sort_stack_2(t_list **stack)
{
    if ((*stack)->num > (*stack)->next->num)
    {
        s(stack, 'a');
    }
}

void    sort_stack_3(t_list **stack)
{
    if ((*stack)->num < (*stack)->next->num && (*stack)->next->num > (*stack)->next->next->num \
        && (*stack)->num < (*stack)->next->next->num)
    {
        s(stack, 'a');
        r(stack, 'a');
    }
    if ((*stack)->num > (*stack)->next->num && (*stack)->next->num > (*stack)->next->next->num)
    {
        r(stack, 'a');
        s(stack, 'a');
    }
    if ((*stack)->num > (*stack)->next->num && (*stack)->num < (*stack)->next->next->num && \
        (*stack)->next->num < (*stack)->next->next->num)
        s(stack, 'a');
    if ((*stack)->num < (*stack)->next->num && (*stack)->next->num > (*stack)->next->next->num && \
        (*stack)->num > (*stack)->next->next->num)
        r(stack, 'a');
    if ((*stack)->num > (*stack)->next->num && (*stack)->num > (*stack)->next->next->num && \
        (*stack)->next->num < (*stack)->next->next->num)
        r(stack, 'a');
}

void    sort_stack_4(t_list **stack_a, t_list **stack_b)
{
    int     min;
    int     b;
    int     size;

    size = stack_size((*stack_a));
    min = min_stack(stack_a);
    b = 1;
    
    while(b)
    {
        if ((min * 2) >= size)
        {
            up_rolling(stack_a, min, size);
            pb(stack_a, stack_b, 'b');    
        }
        else if ((min * 2) < size)
        {
            down_rolling(stack_a, min);
            pb(stack_a, stack_b, 'b');
        }
        b--;
    }
    sort_stack_3(stack_a);
    pa(stack_a, stack_b, 'a');
}

void    sort_stack_5(t_list **stack_a, t_list **stack_b)
{
    int     b;
    int     min;
    int     size;

    b = 1;
    min = min_stack(stack_a);   
    size = stack_size((*stack_a));
    while (b)
    {
        if ((min * 2) >= size)
        {
            up_rolling(stack_a, min, size);
            pb(stack_a, stack_b, 'b');
            sort_stack_4(stack_a, stack_b); 
        }
        else if ((min * 2) < size)
        {
            down_rolling(stack_a, min);
            pb(stack_a, stack_b, 'b');
            sort_stack_4(stack_a, stack_b);
        }
        b--;
    }
    pa(stack_a, stack_b, 'a');
}

void    sort_big_stack(t_list **stack_a, t_list **stack_b)
{
    int     b;
    int     min;
    int     size;
}
