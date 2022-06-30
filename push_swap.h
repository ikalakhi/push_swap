/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:18:09 by ikalakhi          #+#    #+#             */
/*   Updated: 2022/06/27 13:48:11 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
typedef struct node
{
	int			index;
	int			num;
	struct node	*next;
}	t_list;

typedef struct s_sort
{
	int	min;
	int	size;
	int	max;
	int	mid;
	int	to_be_pushed;
}		t_sort;

# define BUFFER_SIZE 2

t_list	*ft_lstnew(int number);
t_list	*ft_lstlast(t_list *lst);
t_list	*put_index(t_list **stack, int *s, int size);
t_list	*swap_sort_check_arry(t_list **stack, int *s, int size);

size_t	ft_strlen(char *s);

int		ft_strchr(char *s, int c);
int		ft_atoi(char *str);
int		ft_avlenth(char **av);
int		*sort(int *s, int size);
int		find_min(t_list *stack);
int		stack_size(t_list *list);
int		top_stack(t_list **stack);
int		max_stack(t_list **stack);
int		check_sorted(t_list *lst);
int		min_stack(t_list **stack);
int		bring_last(t_list *stack);
int		check_dup(int *av, int ac);
int		check_numbers(char **av, int ac);
int		check_if_sorted(t_list **stack_a);
int		is_there(int index, t_list *stack_a);
int		find_twin_num(t_list **stack_b, int top_a);
int		find_index(int data, int *array, int size);
int		find_your_twin(t_list *stack, int min, int max);
int		creat_stack(int ac, char **av, t_list **stack_a);
int		ft_strncmp(char *s1, char *s2, size_t n);

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*help_join(char *save, char *s1, char *s2);

void	erreur(void);
void	rr(t_list **lst);
void	rolling(t_list **stack);
void	s(t_list **lst, char s);
void	r(t_list **lst, char s);
void	sort_stack_2(t_list **stack);
void	print_stack(t_list *stack);
void	sort_stack_3(t_list **stack);
void	rra_rrb(t_list **lst, char s);
void	intialize_last(t_list **stack);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	down_roll(t_list **stack, int pos, char s);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	intialize(t_list **stack_a, t_list **stack_b);
void	sort_stack_4(t_list **stack, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b, char s);
void	pb(t_list **stack_a, t_list **stack_b, char a);
void	fill_stack_a(t_list **stack_a, t_list **stack_b);
void	down_rolling(t_list **stack, int size, char s);
void	sort_stack_4(t_list **stack_a, t_list **stack_b);
void	sort_stack_5(t_list **stack_a, t_list **stack_b);
void	sort_stack_6(t_list **stack_a, t_list **stack_b);
void	sort_stack_7(t_list **stack_a, t_list **stack_b);
void	sort_stack_8(t_list **stack_a, t_list **stack_b);
void	sort_stack_9(t_list **stack_a, t_list **stack_b);
void	sort_stack_10(t_list **stack_a, t_list **stack_b);
void	check_stack_a(t_list **stack_a, t_list **stack_b);
void	up_roll(t_list **stack, int pos, int size, char s);
void	up_rolling(t_list **stack, int min, int size, char s);
void	check_moves(t_list **stack_a, t_list **stack_b, char *arr);
void	check_size(t_list **stack_a, t_list **stack_b, int size);
void	sort_big_stack(t_list **stack_a, t_list **stack_b, int ac);
void	roll(t_list **stack_a, t_list **stack_b, int pos, int size);
void	sort_stack_5_to_10(t_list **stack_a, t_list **stack_b, int ac);
void	push_to_a(t_list **stack_a, t_list **stack_b, int top_a, int top_b);
void	fill_stack_b(t_list **stack_a, t_list **stack_b, int size, t_sort sort);

#endif
