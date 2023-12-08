#include "../include/push_swap.h"

t_stack *stack_get_max_node(t_stack *stack)
{
    t_stack *max_node;
    int max;

    if (stack == NULL)
        return (NULL);
    max = stack->num;
    max_node = stack;
    while (stack)
    {
        if (stack->num > max)
        {
            max = stack->num;
            max_node = stack;
        }
        stack = stack->next;
    }
    return (max_node);
}