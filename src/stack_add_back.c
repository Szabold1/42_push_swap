#include "../include/push_swap.h"

void    stack_add_back(t_stack **stack, t_stack *new_node)
{
    t_stack *curr;

    if (stack == NULL)
        return ;
    if (*stack == NULL) // if list is empty
    {
        *stack = new_node;
        new_node->prev = NULL;
    }
    else
    {
        curr = *stack;
        while (curr->next)
            curr = curr->next;
        curr->next = new_node;
        new_node->prev = curr;
    }
}