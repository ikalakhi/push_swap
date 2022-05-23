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

int creat_stack(int ac, char **av, t_list **stack_a)
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
    return (i);
}

int main(int ac, char **av)
{
    t_list  *stack_a = NULL;
    t_list  *stack_b = NULL;
    int     i;

    creat_stack(ac, av, &stack_a);
    i = check_numbers(av, ac);
    if (ac < 2 || i == 0)
        return 0;
    if (i == 1)
    {
        //ft_intialize(&stack_a, &stack_b);
        // while(stack_a)
        // {
        //     printf("data is : %d\n", stack_a->num);
        //     stack_a = stack_a->next;
        //}
        if (ac == 3)
            sort_stack_2(&stack_a);
        else if (ac == 4)
            sort_stack_3(&stack_a);
        else if (ac == 5)
        {
            //ft_creat_stack(ac, av, &stack_b);

            sort_stack_4(&stack_a, &stack_b);
        }
        // else
        //     sort_big_stack(stack_a)
    }
    //return 0;
}
