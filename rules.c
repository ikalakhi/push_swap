/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 23:36:39 by ikalakhi          #+#    #+#             */
/*   Updated: 2022/04/15 23:36:42 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	s(t_list **lst, char s)
{
	t_list	*next_node;

	if (!lst || !(*lst) || !(*lst)->next)
		return ;
	next_node = (*lst)->next;
	if (stack_size(*lst) == 2)
		(*lst)->next = NULL;
	else
		(*lst)->next = next_node->next;
	next_node->next = (*lst);
	(*lst) = next_node;
	if (s == 'a')
		write(1, "sa\n", 3);
	else if (s == 'b')
		write(1, "sb\n", 3);
}

void	r(t_list **lst, char s)
{
	t_list	*temp1;
	t_list	*temp2;

	if (!lst || !(*lst) || !(*lst)->next)
		return ;
	temp1 = *lst;
	temp2 = (*lst)->next;
	while (temp1->next)
		temp1 = temp1->next;
	temp1->next = *lst;
	(*lst)->next = NULL;
	*lst = temp2;
	if (s == 'a')
		write(1, "ra\n", 3);
	else if (s == 'b')
		write(1, "rb\n", 3);
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	tmp;

	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = NULL;
	ft_lstadd_front(stack_a, &tmp);
	write (1, "pa\n", 3);
}