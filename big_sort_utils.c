/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:41:32 by ikalakhi          #+#    #+#             */
/*   Updated: 2022/06/27 15:47:16 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	up_roll(t_list **stack, int pos, int size, char s)
{
	int	a;

	a = 0;
	while (a < size - pos)
	{
		rra_rrb(stack, s);
		a++;
	}
}

void	down_roll(t_list **stack, int pos, char s)
{
	int	a;

	a = 0;
	while (a < pos)
	{
		r(stack, s);
		a++;
	}
}

int	max_stack(t_list **stack)
{
	int		i;
	int		j;
	int		box;
	t_list	*tmp;

	tmp = (*stack);
	i = 0;
	j = 0;
	box = tmp->index;
	while (tmp)
	{
		if (box < tmp->index)
		{
			j = i;
			box = tmp->index;
		}
		i++;
		tmp = tmp->next;
	}
	return (j);
}

int	find_your_twin(t_list *stack, int min, int max)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = stack;
	while (temp)
	{
		if (min <= temp->index && temp->index <= max)
			return (i);
		i++;
		temp = temp->next;
	}
	return (-1);
}

int	find_min(t_list *stack)
{
	int		min;
	t_list	*p;

	p = stack;
	min = p->index;
	while (p)
	{
		if (min > p->index)
			min = p->index;
		p = p->next;
	}
	return (min);
}
