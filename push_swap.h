/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:18:09 by ikalakhi          #+#    #+#             */
/*   Updated: 2022/05/24 18:29:16 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct node
{
	int			index;
	int			num;
	struct node	*next;
}	t_list;

t_list	*ft_lstnew(int number);
t_list	*ft_lstlast(t_list *lst);
int		ft_atoi(char *str);
int		ft_avlenth(char **av);
int		*sort(int *s, int size);
int		stack_size(t_list *list);
int		check_sorted(t_list *lst);
int		min_stack(t_list **stack);
int		check_numbers(char **av, int ac);
int		check_if_sorted(t_list **stack_a);
int		find_index(int data, int *array, int size);
int		*swap_sort_arry(t_list **stack, int *s, int size);
int		creat_stack(int ac, char **av, t_list **stack_a);
void	erreur(void);
void    deviding(int ac);
void	rr(t_list **lst);
void	rolling(t_list **stack);
void	s(t_list **lst, char s);
void	r(t_list **lst, char s);
void	sort_stack_2(t_list **stack);
void	print_stack(t_list **stack);
void	sort_stack_3(t_list **stack);
void	rra_rrb(t_list **lst, char s);
void	down_rolling(t_list **stack, int i);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	up_rolling(t_list **stack, int i, int size);
void	put_index(t_list **stack, char *s, int size);
void	intialize(t_list **stack_a, t_list **stack_b);
void	sort_stack_4(t_list **stack, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b, char s);
void	pb(t_list **stack_a, t_list **stack_b, char a);
void	sort_stack_4(t_list **stack_a, t_list **stack_b);
void	sort_stack_5(t_list **stack_a, t_list **stack_b);
void	sort_stack_6(t_list **stack_a, t_list **stack_b);
void    sort_stack_7(t_list **stack_a, t_list **stack_b);
void    sort_stack_8(t_list **stack_a, t_list **stack_b);
void    sort_stack_9(t_list **stack_a, t_list **stack_b);
void    sort_stack_10(t_list **stack_a, t_list **stack_b);
void	sort_big_stack(t_list **stack_a, t_list **stack_b, int ac);
void	sort_stack_5_to_10(t_list **stack_a, t_list **stack_b, int ac);

#endif
