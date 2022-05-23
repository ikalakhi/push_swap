/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:25:42 by ikalakhi          #+#    #+#             */
/*   Updated: 2022/04/19 21:25:45 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void    erreur(void)
{
    write(2, "erreur\n", 7);
    exit (1);
}

int	stack_size(t_list *list)
{
	int	count;

	count = 0;
	while (list)
	{
		count++;
		list = list->next;
	}
	return (count);
}

int     *sort(int *arr, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			j++;
		}
		i++;
	}
	return (arr);
}

int	*swap_to_arry(t_list **stack, int *s, int size)
{
	t_list	*temp;
	int	i;

	i = 0;
	temp = (*stack);
	s = malloc (sizeof(int) * size);
	while (temp)
	{
		s[i] = temp->num;
		temp = temp->next;
		i++;
	}
	sort(s, size);
	return (s);
}

void	rolling(t_list **stack)
{
	while ((*stack)->num < (*stack)->next->num)
	{
		rra_rrb(stack, 'a');
	}
}
