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
    int     mid;
    int     size;

    size = stack_size((*stack_a));
    mid = size / 2;
    i = min_stack(stack_a);
    print_stack(stack_a);
    while(stack_a)
    {
        if ((i * 2) >= size)
        {
            rolling(stack_a);     
        }
        // else if (((*stack_a)->next * 2) < size)
        // {

        // }
        (*stack_a) = (*stack_a)->next;
    }
    put_index(stack_a, size);
    pb(stack_a, stack_b, 'b');
    sort_stack_3(stack_a);
    pa(stack_a, stack_b, 'a');
    printf("min is = %d\n", i);
}

//void sort_5_stack(t_list **stack)
//{
//}
// void    *sort_big_stack(t_list **stack)
// {
// }
