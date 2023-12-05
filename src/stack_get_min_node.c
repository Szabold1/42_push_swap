#include "../include/push_swap.h"

t_stack *stack_get_min_node(t_stack *stack)
{
    t_stack *min_node;
    int min;

    if (stack == NULL)
        return (NULL);
    min = stack->num;
    min_node = stack;
    while (stack != NULL)
    {
        if (stack->num < min)
        {
            min = stack->num;
            min_node = stack;
        }
        stack = stack->next;
    }
    return (min_node);
}