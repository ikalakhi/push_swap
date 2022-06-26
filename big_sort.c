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
	int	num;
	int	b;

	b = 0;
	int j = 0;
	while (b < to_be_pushed)
	{
		num = find_your_twin((*stack_a), min, max);
		if (num >= size / 2)
		{
			up_roll(stack_a, num, size, 'a');
			push_to_b(stack_a, stack_b, mid);
		}
		else
		{
			down_roll(stack_a, num, size, 'a');
			push_to_b(stack_a, stack_b, mid);
		}
		size--;
		b++;
		j++;
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
	int j = 0;
	while (size > 5)
	{

		min = find_min((*stack_a));
		printf("min is %d\n", min);
		to_be_pushed = (size - 5) / 3  + 1;
		max = (min + to_be_pushed ) - 1;
		mid = (min + max) / 2;
		printf("max is : %d\n", max);
		fill_stack_b(stack_a, stack_b, size, min, max, mid, to_be_pushed);
		size -= to_be_pushed;
		j++;
	}
	size = stack_size((*stack_a));
	printf("size is = %d\n", size);
	sort_stack_5(stack_a, stack_b);
	printf("stack a is here \n");
	print_stack(*stack_a);
	fill_stack_a(stack_a, stack_b);
	//exit(1);
}

void	fill_stack_a(t_list **stack_a, t_list **stack_b)
{
	int	top_b;
	int	top_a;
	int	size;
	int	last_index;
	int	pos;
	int i = 0;

	pos = 0;
	last_index = 0;
	top_a = 1;
	intialize_last(stack_a);
	while ((*stack_b) && i < 2)
	{
		last_index = bring_last(*stack_a);
		size = stack_size((*stack_b));
		top_a = (*stack_a)->index;
		top_b = (*stack_b)->index;
		if (is_there(top_a - 1, *stack_b))
		{
			if (top_a - 1 == top_b)
				pa(stack_a, stack_b, 'a');
			else if (top_a - 1 > top_b && top_b > last_index)
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
		// 	rra_rrb(stack_a, 'a');
		// printf("stack s is\n");
		// print_stack(*stack_a);
		i++;
	}
		exit(1);
	// printf("stack s is\n");
	// // print_stack(*stack_a);
	// printf("stack b is \n");
	// print_stack(*stack_b);
	while (!check_if_sorted(stack_a))
		rra_rrb(stack_a, 'a');
}
