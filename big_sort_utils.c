/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:41:32 by ikalakhi          #+#    #+#             */
/*   Updated: 2022/06/09 14:41:33 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int deviding(int ac, int b)
{
	if (ac > 100)
		b = 8;
	else if (ac <= 100)
		b = 4;
	return (b);
}

int max_stack(t_list **stack)
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

t_index	find_your_twin(t_list **stack, int ac)
{
	t_list	*temp;
	int		i;
	t_index index;

	index.pos = -1;
	index.index = -1;
	i = 0;
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