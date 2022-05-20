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
    t_list *tmp;

    tmp = (*stack);
    i = 0;
    while (s && tmp)
    {
        tmp->index = i;
        i++;
        tmp = tmp->next;
    }
}

int min_stack(t_list **stack)   
{
    int i;
    t_list *tmp;
    
    tmp = (*stack);
    i = tmp->num;
    while (tmp)
    {
        if (i > tmp->num)
            i = tmp->num;
        tmp = tmp->next;
    }
    return (i);
}

void    ft_intialize(t_list **stack_a, t_list **stack_b)
{
    stack_a = NULL;
    stack_b = NULL;
}

void    print_stack(t_list **stack)
{
    t_list *tmp;
    tmp = (*stack);

    while(tmp)
    {
        printf("data is :%d\n", tmp->num);
        tmp = tmp->next;
    }
}