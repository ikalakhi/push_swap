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

	i = 0;
	while (i < size)
	{
		if (array[i] == data)
			return (i);
		i++;
	}
	return (i);
}

void	put_index(t_list **stack, ,char *s, int size)
{
	t_list	*p;
	int		i;

	s = swap_sort_arry(stack, s, size);
	i = 0;
	p = (*stack);
	while (p)
	{
		p->index = find_index(p->num, s, size);
		p = p->next;
	}
}

int	*swap_sort_arry(t_list **stack, int *s, int size)
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
	return (s);
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
	box = tmp->num;
	while (tmp)
	{
		if (box > tmp->num)
		{
			j = i;
			box = tmp->num;
		}
		i++;
		tmp = tmp->next;
	}
	return (j);
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
