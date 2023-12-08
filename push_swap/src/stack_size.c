#include "../include/push_swap.h"

// get size of stack (length of stack)
int	stack_size(t_stack *stack)
{
	int i;

	if (stack == NULL)
		return (0);
	i = 0;
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}