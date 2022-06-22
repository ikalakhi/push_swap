#include "pushswap.h"

int main (int ac, char **av)
{
    t_list	*stack_a;
	t_list	*stack_b;
	int		i;
	int		j;

	intialize(&stack_a, &stack_b);
	creat_stack(ac, av, &stack_a);
	i = check_numbers(av, ac);
	j = check_if_sorted(&stack_a);
    if (ac < 2 || i == 0 || j == 1)
        return (0);
    if (i == 1)
    {
        
    }
}