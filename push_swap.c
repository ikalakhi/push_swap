/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:17:57 by ikalakhi          #+#    #+#             */
/*   Updated: 2022/04/08 23:18:01 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void    ft_creat_stack(int ac, char **av, t_list **stack_a)
{
    int     i;
    int     num;
    t_list  *new;

    i = 0;
    while (++i < ac)
    {
        num = ft_atoi(av[i]);
        new = ft_lstnew(num);
        ft_lstadd_back(stack_a, new);
    }
}

int main(int ac, char **av)
{
    t_list  *stack_a;
    t_list  *stack_b;

    if (ac < 2)
        return 0;
    stack_a = NULL;
    stack_b = NULL;
    ft_creat_stack(ac, av, &stack_a);
    if (stack_a <= 10)
    {

    }
    r(&stack_a, 'a');
    //p(&stack_a,&stack_b, 'a');
    //s(&stack_a, 'a');
    printf("-------------------\n");
    while (stack_a)
    {
        printf("%d\n", stack_a->num);
        stack_a = stack_a->next;
    }
    return 0;
}
