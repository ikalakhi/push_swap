/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:01:39 by ikalakhi          #+#    #+#             */
/*   Updated: 2022/05/15 16:01:40 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int check_numbers(char **av, int ac)
{
    int i;
    int j;

    i = 1;
    j = 0;
    while (av[i] && i < (ac - 1))
    {
        while(av[i][j])
        {
            if (av[i][j] < '0' || av[i][j] > '9')
            {
                //printf("av[i][j] is : %c\n", av[i][j]);
                return (0);
            }
            j++;
        }
        j = 0;
        i++;
    }
    return (1);
}

void    put_index(t_list **stack, int *s)
{
    int i;

    i = 0;
    while (s && (*stack)->next)
    {
        if (s[i] == (*stack)->num)
            (*stack)->index = i;
        i++;
        (*stack) = (*stack)->next;
    }
}

int min_stack(t_list **stack)   
{
    int i;
    
    i = (*stack)->num;
    while ((*stack))
    {
        if (i > (*stack)->num)
            i = (*stack)->num;
        (*stack) = (*stack)->next;
    }
    return (i);
}

void    ft_intialize(t_list **stack_a, t_list **stack_b)
{
    stack_a = NULL;
    stack_b = NULL;
}