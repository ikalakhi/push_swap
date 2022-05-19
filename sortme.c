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
        //int i = 0;
        // while ((*stack))
        // {
        //     printf("%d", (*stack)->num);
        //     (*stack) = (*stack)->next;
        // }
    // if(!(*stack) && (*stack)->next)
    //     {
    //         printf("Error\n");
    //         exit(1);
    //     }
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


void    sort_stack_4(t_list **stack_a, t_list **stack_b, int *s)
{
    int i;
    int mid;
    int size;

    // while ((*stack_a))
    // {
    //         printf("%d", (*stack_a)->num);
    //         (*stack_a) = (*stack_a)->next;
    // }
    i = 0;
    size = stack_size((*stack_a));
    mid = stack_size((*stack_a)) / 2;
    swap_to_arry(stack_a, s, size);
    put_index(stack_a, s);
    min_stack(stack_a);
            //int i = 0;
    p(stack_a, stack_b, 'b');
    write(1,"imo\n",4);
    sort_stack_3(stack_a);
    p(stack_b, stack_a, 'a');
    free (s);
}

// void    sort_stack_5(t_list **stack, int ac)
// {

// }
// void    *sort_big_stack(t_list stack)
// {
// }
