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

void	sort_big_stack(t_list **stack_a, t_list **stack_b, int ac)
{
    char    *s;//sorted stack
	int	    b;
	t_index	num;
	int	    size;

	b = 0;
	size = ac;
	s = NULL;
	b = deviding(ac, b);
	s = swap_sort_arry(stack_a, s, ac);
	ac = ac / b;
	b = 0;
	while (b < ac)
	{
		num = find_your_twin(stack_a, s, ac);
		if ((num.pos * 2) >= size / 2)
		{
			up_rolling(stack_a, num.pos, size);
			pb(stack_a, stack_b, 'b');
		}
		else
		{
			down_rolling(stack_a, num.pos);
			pb(stack_a, stack_b, 'b');
		}
		b++;
		//printf("I am here\n");
	}
	// while (*stack_b)
	// {
	// 	printf("idx = %d\n",(*stack_b)->index);
	// 	*stack_b = (*stack_b) ->next;
	// }
	
	print_stack(stack_b);
	// while ((*stack_b)->next)
	// {
	// 	pa(stack_a, stack_b, 'b');
	// }
	free (s);
}


t_index	find_your_twin(t_list **stack, char *s, int ac)
{
	t_list	*temp;
	int		i;
	t_index index;

	index.pos = -1;
	index.index = -1;
	i = 0;
	s = NULL;
	temp = (*stack);
	while (temp)
	{
		if (ac >= temp->index)
		{
			index.pos = i;
			index.index = temp ->index;
			break;
		}
		i++;
		temp = temp->next;
	}
	return(index);
}

int	deviding(int ac, int b)
{
	if (ac <= 100)
		b = 4;
	else if (ac > 100)
		b = 8;
	return (b);
}
