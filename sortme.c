/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortme.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:26:05 by ikalakhi          #+#    #+#             */
/*   Updated: 2022/06/27 16:32:01 by ikalakhi         ###   ########.fr       */
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
	if ((*stack)->num > (*stack)->next->num && \
			(*stack)->next->num > (*stack)->next->next->num)
	{
		r(stack, 'a');
		s(stack, 'a');
	}
	if ((*stack)->num > (*stack)->next->num && \
			(*stack)->num < (*stack)->next->next->num && \
			(*stack)->next->num < (*stack)->next->next->num)
		s(stack, 'a');
	if ((*stack)->num < (*stack)->next->num && \
			(*stack)->next->num > (*stack)->next->next->num && \
			(*stack)->num > (*stack)->next->next->num)
		r(stack, 'a');
	if ((*stack)->num > (*stack)->next->num && \
			(*stack)->num > (*stack)->next->next->num && \
			(*stack)->next->num < (*stack)->next->next->num)
		r(stack, 'a');
}

void	sort_stack_4(t_list **stack_a, t_list **stack_b)
{
	int	b;
	int	pos;
	int	size;

	pos = min_stack(stack_a);
	size = stack_size((*stack_a));
	b = 1;
	while (b)
	{
		if (pos >= size / 2)
		{
			up_roll(stack_a, pos, size, 'a');
			pb(stack_a, stack_b, 'b');
			sort_stack_3(stack_a);
		}
		else
		{
			down_roll(stack_a, pos, 'a');
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
	while (b)
	{
		if (pos >= size / 2)
		{
			up_roll(stack_a, pos, size, 'a');
			pb(stack_a, stack_b, 'b');
			sort_stack_4(stack_a, stack_b);
		}
		else
		{
			down_roll(stack_a, pos, 'a');
			pb(stack_a, stack_b, 'b');
			sort_stack_4(stack_a, stack_b);
		}
		b--;
	}
	pa(stack_a, stack_b, 'a');
}
