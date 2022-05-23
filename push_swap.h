/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:18:09 by ikalakhi          #+#    #+#             */
/*   Updated: 2022/04/08 23:18:12 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct node
{
    int         index;
    int         num;
    struct node *next;
} t_list;

t_list  *ft_lstnew(int number);
t_list	*ft_lstlast(t_list *lst);
int     ft_atoi(char *str);
int	    ft_avlenth(char **av);
int     check_numbers(char **av, int ac);
int     *sort(int *s, int size);
int	    stack_size(t_list *list);
int     min_stack(t_list **stack);
int     check_sorted(t_list *lst);
int     find_index(int data, int *array, int size);
int     *swap_to_arry(t_list **stack, int *s, int size);
int     creat_stack(int ac, char **av, t_list **stack_a);
void    sort_stack_2(t_list **stack);
void    sort_stack_3(t_list **stack);
void    sort_big_stack(t_list **stack);
void    put_index(t_list **stack, int size);
void    sort_stack_5(t_list **stack, int ac);
void    ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstadd_front(t_list **lst, t_list *new);
void    sort_stack_4(t_list **stack, t_list **stack_b);
void    erreur(void);
void    rolling(t_list **stack);
void	rr(t_list **lst);
void	s(t_list **lst, char s);
void	r(t_list **lst, char s);
void	rra_rrb(t_list **lst, char s);
void	pa(t_list **stack_a, t_list **stack_b, char a);
void	pb(t_list **stack_a, t_list **stack_b, char a);
void    intialize(t_list **stack_a, t_list **stack_b);
void    print_stack(t_list **stack);

#endif
