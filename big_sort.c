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
	int	    num;
	int	    size;

	b = 0;
	size = ac;
	s = NULL;
	b = deviding(ac, b);
	put_index(stack_a, s, ac);
	printf("I am here\n");
	ac = ac / b;
    num = find_your_twin(stack_a, s, ac);
	while ((*stack_a)->next)
	{
		if ((num * 2) >= size)
		{
			up_rolling(stack_a, num, size);
			pb(stack_a, stack_b, 'b');
		}
		else if ((num * 2) < size)
		{
			down_rolling(stack_a, num);
			pb(stack_a, stack_b, 'b');
		}
		printf("I am here\n");
	}
	while ((*stack_b)->next)
	{
		pa(stack_a, stack_b, 'b');
	}
	free (s);
}

int	find_your_twin(t_list **stack, char *s, int ac)
{
	t_list	*temp;
	s = NULL;

	temp = (*stack);
	while (temp)
	{
		if (ac >= temp->index)
			return(temp->num);
		temp = temp->next;
	}
	return(temp->index);
}

int	deviding(int ac, int b)
{
	if (ac > 10 && ac <= 100)
		b = 4;
	else if (ac > 100)
		b = 8;
	return (b);
}
