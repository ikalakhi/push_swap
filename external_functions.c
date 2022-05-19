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

int	ft_avlenth(char **av)
{
	int	i;

	i = 0;
	while (av[i] != '\0')
	{
		i++;
	}
	return (i);
}

void    ft_erreur(void)
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

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			write (1, &s[i], 1);
			i++;
		}
	}
}

int     *sort(int *arr, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
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
			++j;
		}
		++i;
	}
	return (arr);
}

int	*swap_to_arry(t_list **stack, int *s, int size)
{
	int	i;

	i = 0;
	s = malloc (sizeof(int) * size);
	while((*stack)->next)
	{
		s[i] = (*stack)->num;
		(*stack) = (*stack)->next;
		i++;
	}
	sort(s, size);
	return (s);
}