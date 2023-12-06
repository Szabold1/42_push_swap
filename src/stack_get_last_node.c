#include "../include/push_swap.h"

// get last node of stack
t_stack	*stack_get_last_node(t_stack *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}