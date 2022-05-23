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
    int     i;
    int     b;
    int     size;

    size = stack_size((*stack_a));
    i = min_stack(stack_a);
    b = 1;
    while(b)
    {
        if ((i * 2) >= size)
        {
            printf(" herr%d\n", i);
            up_rolling(stack_a, i, size);
            pb(stack_a, stack_b, 'b');    
        }
        else if ((i * 2) < size)
        {
            down_rolling(stack_a, i);
            pb(stack_a, stack_b, 'b');
        }
        b--;
    }
    //put_index(stack_a, size);
    sort_stack_3(stack_a);
    pa(stack_a, stack_b, 'a');
    print_stack(stack_a);
    //printf("min is = %d\n", i);
}

//void sort_5_stack(t_list **stack)
//{
//}
// void    *sort_big_stack(t_list **stack)
// {
// }
