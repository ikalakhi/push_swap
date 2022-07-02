/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:07:19 by ikalakhi          #+#    #+#             */
/*   Updated: 2022/06/30 20:04:21 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	check_moves(t_list **stack_a, t_list **stack_b, char *arr)
{
	if (ft_strncmp(arr, "ra\n", 3) == 0)
		r(stack_a, 'z');
	else if (ft_strncmp(arr, "rb\n", 3) == 0)
		r(stack_b, 'z');
	else if (ft_strncmp(arr, "sa\n", 3) == 0)
		s(stack_a, 'z');
	else if (ft_strncmp(arr, "sb\n", 3) == 0)
		s(stack_b, 'z');
	else if (ft_strncmp(arr, "ra\n", 3) == 0)
		r(stack_a, 'z');
	else if (ft_strncmp(arr, "rb\n", 3) == 0)
		r(stack_b, 'z');
	else if (ft_strncmp(arr, "rra\n", 4) == 0)
		rra_rrb(stack_a, 'z');
	else if (ft_strncmp(arr, "rrb\n", 4) == 0)
		rra_rrb(stack_b, 'z');
	else if (ft_strncmp(arr, "pa\n", 3) == 0)
		pa(stack_a, stack_b, 'z');
	else if (ft_strncmp(arr, "pb\n", 3) == 0)
		pb(stack_a, stack_b, 'z');
	else
		erreur();
}

int	creat_stack_a(int ac, char **av, t_list **stack_a)
{
	t_list	*new;
	int		i;
	int		num;

	i = 0;
	while (i++ < ac)
	{
		num = ft_atoi(av[i]);
		new = ft_lstnew(num);
		ft_lstadd_back(stack_a, new);
	}
	return (i);
}

void	sort_stack(t_list **stack_a, t_list **stack_b)
{
	char	*s;
	int		j;

	j = 0;
	s = get_next_line(0);
	while (s)
	{
		check_moves(stack_a, stack_b, s);
		s = get_next_line(0);
	}
	j = check_sorted(*stack_a);
	if (j == 1)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	ac = ac - 1;
	check_numbers(av, ac);
	intialize(&stack_a, &stack_b);
	creat_stack_a(ac, av, &stack_a);
	if (ac >= 2)
		sort_stack(&stack_a, &stack_b);
	return (0);
}
