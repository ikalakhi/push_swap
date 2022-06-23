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
	////printf("lol\n");
	while (b <= to_be_pushed)
	{
		//size = stack_size((*stack_b));
		num = find_your_twin(stack_a, min, max);
		// printf("--------------------------------\n");
		// printf("min is %d\n", min);
		// printf("in between is %d\n", mid);
		// printf("max is %d\n", max);
		// printf("--------------------------------\n");
		if (num.index >= mid)
		{
			//printf("-----------------1------------------\n");
			up_roll(stack_a, num.pos, size, 'a');
			push_to_b(stack_a, stack_b, mid);
		}
		else if (num.index < mid)
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
	while (size > 10)
	{
		size = stack_size(*stack_a);
		min = min_stack(stack_a);
		to_be_pushed = (size - 5) / 3  + 1;
		max = (min + to_be_pushed ) - 1;
		mid = (min + max) / 2;
		fill_stack_b(stack_a, stack_b, size, min, max, mid, to_be_pushed);
		printf("------------------------here-------------------------------\n");
	}
	printf("------------------------80------------------------------\n");
	sort_stack_5_to_10(stack_a, stack_b, size);
	//printf("I am here");
	//print_stack(stack_b);
	//fill_stack_a(stack_a, stack_b);
}

void	push_to_stack_a(t_list **stack_a, t_list **stack_b)
{
	int	size;
	int	max;

	size = stack_size((*stack_b));
	while (size > 0)
	{
		max = max_stack(stack_b);
		if ((max * 2) >= size)
		{
			up_rolling(stack_b, max, size, 'b');
			pa(stack_a, stack_b, 'a');
		}
		else if ((max * 2) < size)
		{
			down_rolling(stack_b, max, 'b');
			pa(stack_a, stack_b, 'a');
		}
		size--;
	}
}
