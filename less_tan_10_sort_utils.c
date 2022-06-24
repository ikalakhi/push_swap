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
		if (min >= size / 2)
		{
			up_rolling(stack_a, min, size, 'a');
			pb(stack_a, stack_b, 'b');
			sort_stack_5(stack_a, stack_b);
		}
		else if (min < size / 2)
		{
			down_rolling(stack_a, min, 'a');
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
		if (min >= size / 2)
		{
			up_rolling(stack_a, min, size, 'a');
			pb(stack_a, stack_b, 'b');
			sort_stack_6(stack_a, stack_b);
		}
		else if (min < size / 2)
		{
			down_rolling(stack_a, min, 'a');
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
		if (min >= size / 2)
		{
			up_rolling(stack_a, min, size, 'a');
			pb(stack_a, stack_b, 'b');
			sort_stack_7(stack_a, stack_b);
		}
		else if (min < size / 2)
		{
			down_rolling(stack_a, min, 'a');
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
		if (min >= size / 2)
		{
			up_rolling(stack_a, min, size, 'a');
			pb(stack_a, stack_b, 'b');
			sort_stack_8(stack_a, stack_b);
		}
		else if (min < size / 2)
		{
			down_rolling(stack_a, min, 'a');
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
	printf("size is = %d\n", size);
	while (b)
	{
		if (min >= size / 2)
		{
			up_rolling(stack_a, min, size, 'a');
			pb(stack_a, stack_b, 'b');
			sort_stack_9(stack_a, stack_b);
		}
		else if (min < size / 2)
		{
			down_rolling(stack_a, min, 'a');
			pb(stack_a, stack_b, 'b');
			sort_stack_9(stack_a, stack_b);
		}
		b--;
	}
	pa(stack_a, stack_b, 'a');
}
