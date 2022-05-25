/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:17:57 by ikalakhi          #+#    #+#             */
/*   Updated: 2022/05/24 18:23:34 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	creat_stack(int ac, char **av, t_list **stack_a)
{
	t_list	*new;
	int		i;
	int		num;

	i = 0;
	while (++i < ac)
	{
		num = ft_atoi(av[i]);
		new = ft_lstnew(num);
		ft_lstadd_back(stack_a, new);
	}
	return (i);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;
	int		j;

	intialize(&stack_a, &stack_b);
	creat_stack(ac, av, &stack_a);
	i = check_numbers(av, ac);
	j = check_if_sorted(&stack_a);
	if (ac < 2 || i == 0 || j == 1)
		return (0);
	if (i == 1)
	{
		if (ac == 3)
			sort_stack_2(&stack_a);
		else if (ac == 4)
			sort_stack_3(&stack_a);
		else if (ac == 5)
			sort_stack_4(&stack_a, &stack_b);
		else if (ac == 6)
			sort_stack_5(&stack_a, &stack_b);
		else
			sort_big_stack(&stack_a, &stack_b, (ac - 1));
	}
	//print_stack(stack_a);
	return (0);
}
