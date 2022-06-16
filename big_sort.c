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
	b = dividing(ac, b);
	put_index(stack_a, s, ac);
	while (ac >= 0)
	{
		ac = ac / b;
    	find_your_twin(stack, s, b)
		
    }
	free (s);
}

int	find_your_twin(t_list **stack, char *s, int ac)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = (*stack);
	while (temp)
	{
		if (b >= temp->index)
			return(temp->index);
		temp = temp->next;
	}
}

int	dividing(int ac, int b)
{
	if (ac > 10 && ac <= 100)
		b = 4;
	else if (ac > 100)
		b = 8;
	return (b);
}
