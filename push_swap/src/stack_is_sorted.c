#include "../include/push_swap.h"

// check if stack is sorted
bool	stack_is_sorted(t_stack *stack)
{
	t_stack	*curr;
	t_stack	*next;

	if (stack == NULL || stack->next == NULL)
		return (true);
	curr = stack;
	while (curr->next)
	{
		next = curr->next;
		if (curr->num > next->num)
			return (false);
		curr = next;
	}
	return (true);
}