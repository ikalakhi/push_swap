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
#include <stdio.h>

typedef struct list
{
    int num;
    struct list *next;
} t_list;

t_list  *ft_lstnew(int number);
t_list	*ft_lstlast(t_list *lst);
int     *sort_small_stack(int *a);
int     *sort_big_stack(int *b);
int     ft_atoi(char *str);
int	    ft_avlenth(char **av);
int	    stack_size(t_list *list);
void    ft_erreur(void);
void    ft_lstadd_front(t_list **lst, t_list *new);
void    ft_lstadd_back(t_list **lst, t_list *new);
void	s(t_list **lst, char s);
void	r(t_list **lst, char s);
void	pa(t_list **stack_a, t_list **stack_b);

#endif
