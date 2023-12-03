#include "../include/push_swap.h"

int	check_dup(t_stack *stack)
{
	t_stack *temp;

	while (stack)
	{
		temp = stack->next;
		while (temp)
		{
			if (stack->num == temp->num)
				return (1);
			temp = temp->next;
		}
	temp = temp->next;
	}
	return (0);
}