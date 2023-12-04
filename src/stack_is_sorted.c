#include "../include/push_swap.h"

int	stack_is_sorted(t_stack *stack)
{
	t_stack	*curr;
	t_stack	*next;

	if (stack == NULL || stack->next == NULL)
		return (1);
	curr = stack;
	while (curr->next)
	{
		next = curr->next;
		if (curr->num > next->num)
			return (0);
		curr = next;
	}
	return (1);
}