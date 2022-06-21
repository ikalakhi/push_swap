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

void	check_size(t_list **stack_a, t_list **stack_b, int size)
{
	if (size == 2)
		sort_stack_2(stack_a);
	else if (size == 3)
		sort_stack_3(stack_a);
	else if (size == 4)
		sort_stack_4(stack_a, stack_b);
	else if (size == 5)
		sort_stack_5(stack_a, stack_b);
	else if (size >= 6)
		sort_stack_5_to_10(stack_a, stack_b, size);
}

void	check_stack_a(t_list **stack_a, t_list **stack_b)
{
	int	size;
	int	min;
	int	b;

	size = stack_size((*stack_a));
	b = 1;
	//printf("i am here\n");
	if (size <= 10)
		check_size(stack_a, stack_b, size);
	while (size > 10)
	{
		min = min_stack(stack_a);
		if ((min * 2) >= size)
		{
			up_rolling(stack_a, min, size, 'b');
			pb(stack_a, stack_b, 'b');
		}
		else if ((min * 2) < size)
		{
			down_rolling(stack_a, min, 'b');
			pb(stack_a, stack_b, 'b');
		}
		size--;
	}
}

void	fill_stack_b(t_list **stack_a, t_list **stack_b, int size, int chunk)
{
	t_index	num;
	int		b;

	b = 0;
	while (b < chunk)
	{
		num = find_your_twin(stack_a, chunk);
		if ((num.pos * 2) >= size / 2)
		{
			up_rolling(stack_a, num.pos, size, 'a');
			pb(stack_a, stack_b, 'b');
		}
		else
		{
			down_rolling(stack_a, num.pos, 'a');
			pb(stack_a, stack_b, 'b');
		}
		b++;
	}
}

void	sort_big_stack(t_list **stack_a, t_list **stack_b, int ac)
{
    char    *s;//sorted stack
	int	    b;
	int		chunk;
	int	    size;

	b = 0;
	size = ac;
	s = NULL;
	b = deviding(ac, b);
	s = swap_sort_arry(stack_a, s, ac);
	chunk = ac / b;
	while (chunk <= size)
	{
		fill_stack_b(stack_a, stack_b, size, chunk);
		chunk = chunk + (ac / b);
	}
	//printf("i am here again\n");
	if (stack_a)
		check_stack_a(stack_a, stack_b);
	push_to_stack_a(stack_a, stack_b);
	print_stack(stack_a);
	free (s);
}

void	push_to_stack_a(t_list **stack_a, t_list **stack_b)
{
	int	size;
	int	max;

	//printf("hello\n");
	//int i = 0;
	size = stack_size((*stack_b));
	while (size > 0)
	{
		max = max_stack(stack_b);
		if ((max * 2) >= size)
		{
			up_rolling(stack_b, max, size, 'a');
			pa(stack_a, stack_b, 'a');
		}
		else if ((max * 2) < size)
		{
			down_rolling(stack_b, max, 'a');
			pa(stack_a, stack_b, 'a');
		}
		size--;
	}
}
