#include "../include/push_swap.h"

void    sort_stack(t_stack **stack_a)
{
    t_stack *stack_b;

    stack_b = NULL;
    if (stack_size(stack_a) == 2)
        sa(stack_a);
    else if (stack_size(stack_a) == 3)
        sort_three(stack_a);
    else
        sort_stack_big(stack_a);
}