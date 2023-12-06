#include "../include/push_swap.h"

// get size of stack (length of stack)
int	stack_size(t_stack *stack)
{
	int i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}