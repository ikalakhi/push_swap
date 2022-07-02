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

void	check_numbers(char **av, int ac)
{
	int	j;

	j = 0;
	if (!check_dup(av, ac))
		erreur();
	while (ac > 0)
	{
		if (!av[ac] || !av[ac][0])
			erreur();
		while (av[ac][j])
		{
			if (av[ac][j] == '+' || av[ac][j] == '-')
				j++;
			if ((av[ac][j - 1] == '+' && av[ac][j] == '\0')
			|| (av[ac][j - 1] == '-' && av[ac][j] == '\0'))
				erreur();
			else if (av[ac][j] < '0' || av[ac][j] > '9')
				erreur();
			j++;
		}
		j = 0;
		ac--;
	}
}

int	check_dup(char **av, int ac)
{
	int	i;
	int	j;

	i = 1;
	ac = ac + 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (!ft_strcmp(av[i], av[j]))
				erreur();
			j++;
		}
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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	rrr(t_list **stack_a, t_list **stack_b, int i)
{
	rra_rrb(stack_a, 'z');
	rra_rrb(stack_b, 'z');
	if (i == 1)
		write(1, "rrr\n", 4);
}
