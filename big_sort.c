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
	int	    min;
	int	    mid;
	int	    size;

	b = 0;
	b = deviding(ac, b);
	put_index(stack_a, s, ac);
	while (ac >= 10)
	{
		ac = ac / b;
    	find_your_twin(stack_a, s, ac);
		pb(stack_a, stack_b, 'b');
    }
	if (ac == 10)
		sort_stack_5_to_10(stack_a, stack_b, ac);
	free (s);
}

int	find_your_twin(t_list **stack, char *s, int ac)
{
	t_list	*temp;

	temp = (*stack);
	while (temp)
	{
		if (ac >= temp->index)
			return(temp->num);
		temp = temp->next;
	}
}

int	deviding(int ac, int b)
{
	if (ac > 10 && ac <= 100)
		b = 4;
	else if (ac > 100)
		b = 8;
	return (b);
}
