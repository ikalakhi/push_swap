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

typedef struct s_index
{
	int pos;
	int index;
}		t_index;

t_list	*ft_lstnew(int number);
t_list	*ft_lstlast(t_list *lst);
t_index	find_your_twin(t_list **stack, int min, int max);

int		ft_atoi(char *str);
int		ft_avlenth(char **av);
int		find_min(t_list **stack);
int		stack_size(t_list *list);
int		top_stack(t_list **stack);
int		max_stack(t_list **stack);
int		check_sorted(t_list *lst);
int		min_stack(t_list **stack);
int		intialize_last(t_list **stack);
int		check_numbers(char **av, int ac);
int		check_if_sorted(t_list **stack_a);
int		find_twin_num(t_list **stack_b, int top_a);
int		find_index(int data, char *array, int size);
int		creat_stack(int ac, char **av, t_list **stack_a);

char	*sort(char *s, int size);
char	*swap_sort_arry(t_list **stack, char *s, int size);

void	erreur(void);
void	rr(t_list **lst);
void	rolling(t_list **stack);
void	s(t_list **lst, char s);
void	r(t_list **lst, char s);
void	sort_stack_2(t_list **stack);
void	print_stack(t_list **stack);
void	sort_stack_3(t_list **stack);
void	rra_rrb(t_list **lst, char s);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	put_index(t_list **stack, char *s, int size);
void	intialize(t_list **stack_a, t_list **stack_b);
void	sort_stack_4(t_list **stack, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b, char s);
void	pb(t_list **stack_a, t_list **stack_b, char a);
void	down_rolling(t_list **stack, int size, char s);
void	sort_stack_4(t_list **stack_a, t_list **stack_b);
void	sort_stack_5(t_list **stack_a, t_list **stack_b);
void	sort_stack_6(t_list **stack_a, t_list **stack_b);
void    sort_stack_7(t_list **stack_a, t_list **stack_b);
void    sort_stack_8(t_list **stack_a, t_list **stack_b);
void    sort_stack_9(t_list **stack_a, t_list **stack_b);
void	fill_stack_a(t_list **stack_a, t_list **stack_b);
void    sort_stack_10(t_list **stack_a, t_list **stack_b);
void	check_stack_a(t_list **stack_a, t_list **stack_b);
void	up_roll(t_list **stack, int pos, int size, char s);
void	down_roll(t_list **stack, int pos, int min, char s);
void	up_rolling(t_list **stack, int min, int size, char s);
void	check_size(t_list **stack_a, t_list **stack_b, int size);
void	sort_big_stack(t_list **stack_a, t_list **stack_b, int ac);
void    roll(t_list **stack_a, t_list **stack_b, int pos, int size);
void	sort_stack_5_to_10(t_list **stack_a, t_list **stack_b, int ac);
void	fill_stack_b(t_list **stack_a, t_list **stack_b, int size, int min, int max, int mid, int to_be_pushed);

#endif
