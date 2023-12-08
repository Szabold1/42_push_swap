#include "../include/push_swap.h"

// set indexes and above_middle for nodes in stack
void	set_node_indexes(t_stack *stack)
{
	int	i;
	int	middle;

	if (stack == NULL)
		return ;
	i = 0;
	middle = stack_size(stack) / 2;
	while (stack)
	{
		if (i > middle)
			stack->above_middle = false;
		else if (i <= middle)
			stack->above_middle = true;
		stack->index = i++;
		stack = stack->next;
	}
}