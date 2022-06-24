/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:16:25 by ikalakhi          #+#    #+#             */
/*   Updated: 2022/05/27 15:16:29 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void push_to_b(t_list **stack_a, t_list **stack_b, int mid)
{
	pb(stack_a, stack_b, 'b');
	if ((*stack_b)->index > mid)
		r(stack_b, 'b');
}

void	fill_stack_b(t_list **stack_a, t_list **stack_b, int size,\
		 int min, int max, int mid, int to_be_pushed)
{
	t_index	num;
	int		b;

	b = 0;
	while (b < to_be_pushed)
	{
		num = find_your_twin(stack_a, min, max);
		if (num.pos >= mid)
		{
			up_roll(stack_a, num.pos, size, 'a');
			push_to_b(stack_a, stack_b, mid);
		}
		else if (num.pos < mid)
		{
			down_roll(stack_a, num.pos, size, 'a');
			push_to_b(stack_a, stack_b, mid);
		}
		b++;
	}
}

void	sort_big_stack(t_list **stack_a, t_list **stack_b, int ac)
{
	int		min;
	int		mid;
	int		max;
	int	    size;
	int		to_be_pushed;

	size = ac;
	printf("size is = %d\n", size);
	while (size > 5)
	{
		//printf("------------------------80------------------------------\n");
		min = min_stack(stack_a);
		//printf("min is = %d\n", min);
		to_be_pushed = (size - 5) / 3  + 1;
		//printf("to_be_pushed is = %d\n", to_be_pushed);
		max = (min + to_be_pushed ) - 1;
		//printf("max is = %d\n", max);
		mid = (min + max) / 2;
		//printf("mid is = %d\n", mid);
		fill_stack_b(stack_a, stack_b, size, min, max, mid, to_be_pushed);
		size -= to_be_pushed;
		//printf("------------------------here-------------------------------\n");
	}
	size = stack_size((*stack_a));
	// printf("stack_b\n");
	// print_stack(stack_b);
	sort_stack_5(stack_a, stack_b);
	fill_stack_a(stack_a, stack_b);
}

void	fill_stack_a(t_list **stack_a, t_list **stack_b)
{
	int	top_b;
	int	top_a;
	int	size;
	int	pos;

	pos = 0;
	size = stack_size(stack_b);
	while (top_a != 0)
	{
		top_a = top_stack(stack_a);
		top_b = top_stack(stack_b);
		if ((top_a - 1) == top_b)
			pa(stack_a, stack_b, 'a');
		else
		{
			intialize_last(stack_a);
			if ((top_a - 1) > top_b && top_b > -1)
			{
				p(stack_a, stack_b, 'a');
				r(stack_a, 'a');
			}
			else if ((top_a - 1) > top_b && top_b < bring_last(stack_a))
			{
				pos = find_index(stack_b, top_a);
				roll(stack_a, stack_b, pos, size);
			}
			else if (pos == -2)
				rra_rrb(stack_a, 'a');
		}
	}
}
