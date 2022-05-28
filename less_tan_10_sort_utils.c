/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:14:03 by ikalakhi          #+#    #+#             */
/*   Updated: 2022/05/25 13:14:07 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void    sort_stack_6(t_list **stack_a, t_list **stack_b)
{
    int	b;
	int	min;
	int	size;

	b = 1;
	min = min_stack(stack_a);
	size = stack_size((*stack_a));
	while (b)
	{
		if ((min * 2) >= size)
		{
			up_rolling(stack_a, min, size);
			pb(stack_a, stack_b, 'b');
			sort_stack_5(stack_a, stack_b);
		}
		else if ((min * 2) < size)
		{
			down_rolling(stack_a, min);
			pb(stack_a, stack_b, 'b');
			sort_stack_5(stack_a, stack_b);
		}
		b--;
	}
	pa(stack_a, stack_b, 'a');
}

void    sort_stack_7(t_list **stack_a, t_list **stack_b)
{
    int	b;
	int	min;
	int	size;

	b = 1;
	min = min_stack(stack_a);
	size = stack_size((*stack_a));
	while (b)
	{
		if ((min * 2) >= size)
		{
			up_rolling(stack_a, min, size);
			pb(stack_a, stack_b, 'b');
			sort_stack_6(stack_a, stack_b);
		}
		else if ((min * 2) < size)
		{
			down_rolling(stack_a, min);
			pb(stack_a, stack_b, 'b');
			sort_stack_6(stack_a, stack_b);
		}
		b--;
	}
	pa(stack_a, stack_b, 'a');
}

void    sort_stack_8(t_list **stack_a, t_list **stack_b)
{
    int	b;
	int	min;
	int	size;

	b = 1;
	min = min_stack(stack_a);
	size = stack_size((*stack_a));
	while (b)
	{
		if ((min * 2) >= size)
		{
			up_rolling(stack_a, min, size);
			pb(stack_a, stack_b, 'b');
			sort_stack_7(stack_a, stack_b);
		}
		else if ((min * 2) < size)
		{
			down_rolling(stack_a, min);
			pb(stack_a, stack_b, 'b');
			sort_stack_7(stack_a, stack_b);
		}
		b--;
	}
	pa(stack_a, stack_b, 'a');
}

void    sort_stack_9(t_list **stack_a, t_list **stack_b)
{
    int	b;
	int	min;
	int	size;

	b = 1;
	min = min_stack(stack_a);
	size = stack_size((*stack_a));
	while (b)
	{
		if ((min * 2) >= size)
		{
			up_rolling(stack_a, min, size);
			pb(stack_a, stack_b, 'b');
			sort_stack_8(stack_a, stack_b);
		}
		else if ((min * 2) < size)
		{
			down_rolling(stack_a, min);
			pb(stack_a, stack_b, 'b');
			sort_stack_8(stack_a, stack_b);
		}
		b--;
	}
	pa(stack_a, stack_b, 'a');
}

void    sort_stack_10(t_list **stack_a, t_list **stack_b)
{
    int	b;
	int	min;
	int	size;

	b = 1;
	min = min_stack(stack_a);
	size = stack_size((*stack_a));
	while (b)
	{
		if ((min * 2) >= size)
		{
			up_rolling(stack_a, min, size);
			pb(stack_a, stack_b, 'b');
			sort_stack_9(stack_a, stack_b);
		}
		else if ((min * 2) < size)
		{
			down_rolling(stack_a, min);
			pb(stack_a, stack_b, 'b');
			sort_stack_9(stack_a, stack_b);
		}
		b--;
	}
	pa(stack_a, stack_b, 'a');
}
