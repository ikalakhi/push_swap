/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:25:42 by ikalakhi          #+#    #+#             */
/*   Updated: 2022/05/24 18:03:19 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	erreur(void)
{
	write (2, "Error\n", 6);
	exit (1);
}

int	stack_size(t_list *list)
{
	size_t    i;

    i = 0;
    while (list)
    {
        list = list->next;
        i++;
    }
    return (i);
}

char	*sort(char *arr, int size)
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

void	up_rolling(t_list **stack, int pos, int size, char s)
{
	while (pos < size)
	{
		rra_rrb(stack, s);
		pos++;
	}
}

void	down_rolling(t_list **stack, int size, char s)
{
	while (size > 0)
	{
		r(stack, s);
		size--;
	}
}
