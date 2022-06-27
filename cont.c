#include "push_swap.h"

void    print_stack(t_list *stack)
{
    while(stack)
    {
        printf("[_ind %d] [data is %d]\n",  stack->index, stack->num);
        stack = stack->next;
    }
}

void    rr(t_list **lst)
{
    if (!lst || !(*lst) || !(*lst)->next)
        return ;
    r(&(*lst), 'a');
    r(&(*lst), 'b');
    write(1, "rr\n", 3);
}

// int main()
// {
//     int i = 0;

//     while (i <= 1000)
//     {
//         printf("%d ", i);
//         i++;
//     }
// }
