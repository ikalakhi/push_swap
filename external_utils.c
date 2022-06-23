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

int	find_index(int data, char *array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (array[i] == data)
			return (i);
		i++;
	}
	return (i);
}

void	put_index(t_list **stack, char *s, int size)
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
}

char	*swap_sort_arry(t_list **stack, char *s, int size)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = (*stack);
	s = malloc (sizeof(int) * size);
	if (!s)
		return (0);
	while (temp)
	{
		s[i] = temp->num;
		temp = temp->next;
		i++;
	}
	s = sort(s, size);
	put_index(stack, s, i);
	return (s);
}

int	min_stack(t_list **stack)
{
    int        i;
    int        min;
    t_list    *p;

    p = (*stack);
    i = 0;
    min = find_min(stack);
    while (p)
    {
        if (p->index == min)
            return (i);
        (p) = (p)->next;
        i++;
    }
    return (i);
}

int    find_min(t_list **stack)
{
    int        min;
    t_list    *p;

    p = (*stack);
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

void    print_stack(t_list **stack)
{
    t_list *tmp;
    tmp = (*stack);

    while(tmp)
    {
        printf("[_%d_]\n", tmp->num);
        tmp = tmp->next;
    }
}
