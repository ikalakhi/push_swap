/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:16:25 by ikalakhi          #+#    #+#             */
/*   Updated: 2022/06/27 15:49:15 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	push_to_b(t_list **stack_a, t_list **stack_b, int mid)
{
	pb(stack_a, stack_b, 'b');
	if ((*stack_b)->index > mid)
		r(stack_b, 'b');
}

void	fill_stack_b(t_list **stack_a, t_list **stack_b, int size, t_sort sort)
{
	int	num;
	int	b;

	b = 0;
	while (b < sort.to_be_pushed)
	{
		num = find_your_twin((*stack_a), sort.min, sort.max);
		if (num >= size / 2)
		{
			up_roll(stack_a, num, size, 'a');
			push_to_b(stack_a, stack_b, sort.mid);
		}
		else
		{
			down_roll(stack_a, num, 'a');
			push_to_b(stack_a, stack_b, sort.mid);
		}
		size--;
		b++;
	}
}

void	sort_big_stack(t_list **stack_a, t_list **stack_b, int ac)
{
	t_sort	sort;
	int		size;

	size = ac;
	while (size > 5)
	{
		sort.min = find_min((*stack_a));
		sort.to_be_pushed = (size - 5) / 4 + 1;
		sort.max = (sort.min + sort.to_be_pushed) - 1;
		sort.mid = (sort.min + sort.max) / 2;
		fill_stack_b(stack_a, stack_b, size, sort);
		size -= sort.to_be_pushed;
	}
	sort_stack_5(stack_a, stack_b);
	fill_stack_a(stack_a, stack_b);
}

void	fill_stack_a(t_list **stack_a, t_list **stack_b)
{
	int	top_b;
	int	top_a;

	top_a = 0;
	top_b = 0;
	intialize_last(stack_a);
	while ((*stack_b))
	{
		top_a = (*stack_a)->index;
		top_b = (*stack_b)->index;
		push_to_a(stack_a, stack_b, top_a, top_b);
	}
	while (!check_sorted((*stack_a)))
		rra_rrb(stack_a, 'a');
}

void	push_to_a(t_list **stack_a, t_list **stack_b, int top_a, int top_b)
{
	int	last_index;
	int	size;
	int	pos;

	last_index = bring_last(*stack_a);
	size = stack_size((*stack_b));
	if ((top_a - 1) == top_b)
		pa(stack_a, stack_b, 'a');
	else if (is_there(top_a - 1, *stack_b))
	{
		if ((top_a - 1) > top_b && top_b > last_index)
		{
			pa(stack_a, stack_b, 'a');
			r(stack_a, 'a');
		}
		else
		{
			pos = find_twin_num(stack_b, top_a - 1);
			roll(stack_a, stack_b, pos, size);
		}
	}
	else
		rra_rrb(stack_a, 'a');
}
