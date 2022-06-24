/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortme.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:26:05 by ikalakhi          #+#    #+#             */
/*   Updated: 2022/05/24 18:48:22 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sort_stack_2(t_list **stack)
{
	if ((*stack)->num > (*stack)->next->num)
		s(stack, 'a');
}

void	sort_stack_3(t_list **stack)
{
	if ((*stack)->num < (*stack)->next->num \
			&& (*stack)->next->num > (*stack)->next->next->num \
			&& (*stack)->num < (*stack)->next->next->num)
	{
		s(stack, 'a');
		r(stack, 'a');
	}
	else if ((*stack)->num > (*stack)->next->num && \
			(*stack)->next->num > (*stack)->next->next->num)
	{
		r(stack, 'a');
		s(stack, 'a');
	}
	else if ((*stack)->num > (*stack)->next->num && \
			(*stack)->num < (*stack)->next->next->num && \
			(*stack)->next->num < (*stack)->next->next->num)
		s(stack, 'a');
	else if ((*stack)->num < (*stack)->next->num && \
			(*stack)->next->num > (*stack)->next->next->num && \
			(*stack)->num > (*stack)->next->next->num)
		r(stack, 'a');
	else if ((*stack)->num > (*stack)->next->num && \
			(*stack)->num > (*stack)->next->next->num && \
			(*stack)->next->num < (*stack)->next->next->num)
		r(stack, 'a');
}

void	sort_stack_4(t_list **stack_a, t_list **stack_b)
{
	int	b;
	int	pos;
	int	size;

	size = stack_size((*stack_a));
	pos = min_stack(stack_a);
	b = 1;
	while (b)
	{
		if (pos >= size / 2)
		{
			up_rolling(stack_a, pos, size, 'a');
			pb(stack_a, stack_b, 'b');
			sort_stack_3(stack_a);
		}
		else if (pos < size / 2)
		{
			down_rolling(stack_a, size, 'a');
			pb(stack_a, stack_b, 'b');
			sort_stack_3(stack_a);
		}
		b--;
	}
	pa(stack_a, stack_b, 'a');
}

void	sort_stack_5(t_list **stack_a, t_list **stack_b)
{
	int	b;
	int	pos;
	int	size;

	b = 1;
	pos = min_stack(stack_a);
	size = stack_size((*stack_a));
	printf("stack_a\n");
	print_stack(stack_a);
	while (b)
	{
		if (pos >= size / 2)
		{
			up_rolling(stack_a, pos, size, 'a');
			pb(stack_a, stack_b, 'b');
			sort_stack_4(stack_a, stack_b);
		}
		else if (pos < size / 2)
		{
			down_rolling(stack_a, size, 'a');
			pb(stack_a, stack_b, 'b');
			sort_stack_4(stack_a, stack_b);
		}
		b--;
	}
	pa(stack_a, stack_b, 'a');
}

// void	sort_stack_5_to_10(t_list **stack_a, t_list **stack_b, int ac)
// {
// 	if (ac == 6)
// 		sort_stack_6(stack_a, stack_b);
// 	else if (ac == 7)
// 		sort_stack_7(stack_a, stack_b);
// 	else if (ac == 8)
// 		sort_stack_8(stack_a, stack_b);
// 	else if (ac == 9)
// 		sort_stack_9(stack_a, stack_b);
// 	else if (ac == 10)
// 		sort_stack_10(stack_a, stack_b);
// }
