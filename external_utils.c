/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:01:39 by ikalakhi          #+#    #+#             */
/*   Updated: 2022/05/24 18:14:02 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	find_index(int data, int *array, int size)
{
	int	i;

	i = size - 1;
	while (i >= 0)
	{
		if (array[i] == data)
			return (i);
		i--;
	}
	return (i);
}

t_list 	*put_index(t_list **stack, int *s, int size)
{
	t_list	*p;
	int		i;

	i = 0;
	p = (*stack);
	while (p)
	{
		p->index = find_index(p->num, s, size);
		p = p->next;
	}
	return (*stack);
}

t_list *swap_sort_arry(t_list **stack, int *s, int size)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = (*stack);
	s = malloc (sizeof(int) * (size));
	if (!s)
		return (0);
	while (temp)
	{
		s[i] = temp->num;
		temp = temp->next;
		i++;
	}
	s = sort(s, size);
	return(put_index(stack, s, i));
}

int	min_stack(t_list **stack)
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
		if (box > tmp->index)
		{
			j = i;
			box = tmp->index;
		}
		i++;
		tmp = tmp->next;
	}
	return (j);
}

int    find_min(t_list *stack)
{
    int        min;
    t_list    *p;

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

void	intialize(t_list **stack_a, t_list **stack_b)
{
	stack_a = NULL;
	stack_b = NULL;
}

void    print_stack(t_list *stack)
{
    while(stack)
    {
        printf("[_ind %d] [data is %d]\n",  stack->index, stack->num);
        stack = stack->next;
    }
}
