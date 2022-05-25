/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheking_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:01:51 by ikalakhi          #+#    #+#             */
/*   Updated: 2022/05/25 15:01:56 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	check_numbers(char **av, int ac)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (av[i] && i < (ac - 1))
	{
		while (av[i][j])
		{
            if (av[i][j] == '+' || av[i][j] == '-')
                j++;
			else if (av[i][j] < '0' || av[i][j] > '9')
			{
				return (0);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int	check_sorted(t_list *lst)
{
	if (lst == NULL)
		return (0);
	while (lst->next)
	{
		if (lst->num > lst->next->num)
			return (0);
		lst = lst->next;
	}
	return (1);
}

int	check_if_sorted(t_list **stack_a)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = (*stack_a);
	tmp2 = (*stack_a)->next;
	while (tmp1)
	{
		while (tmp2)
		{
			if (tmp1->num > tmp2->num)
				return (0);
			tmp2 = tmp2->next;
		}
		tmp2 = tmp1->next;
		tmp1 = tmp1->next;
	}
	return (1);
}