/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:41:32 by ikalakhi          #+#    #+#             */
/*   Updated: 2022/06/09 14:41:33 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int dividing(int ac, int b)
{
	if (ac >= 250 && ac < 350)
		b = 6;
	else if (ac > 100)
		b = 5;
	if (ac <= 100)
		b = 3;
	return (b);
}