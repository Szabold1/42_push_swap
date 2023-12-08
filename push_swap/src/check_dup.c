#include "../include/push_swap.h"

bool	has_duplicate(t_stack *stack)
{
	t_stack *temp;

	while (stack)
	{
		temp = stack->next;
		while (temp)
		{
			if (stack->num == temp->num)
				return (true);
			temp = temp->next;
		}
	stack = stack->next;
	}
	return (false);
}