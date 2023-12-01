#include "../include/push_swap.h"

void    free_stack(t_stack *stack)
{
    t_stack *next;
    t_stack *curr;

    if (!stack)
        return ;
    curr = stack;
    while (curr)
    {
        next = curr->next;
        free(curr);
        curr = next;
    }
}