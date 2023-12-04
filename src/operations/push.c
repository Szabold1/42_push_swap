#include "../../include/push_swap.h"

// push the first node from stack_1 to stack_2
void	push(t_stack **stack_1, t_stack **stack_2)
{
	if (*stack_1 == NULL)
		return ;
	if ((*stack_1)->next)
		(*stack_1)->next->prev = NULL;
	(*stack_1)->next = *stack_2;
	if ((*stack_2))
		(*stack_2)->prev = *stack_1;
	*stack_2 = *stack_1;
}

// pa (push a): Take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty.
void	pa(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_b, stack_a);
	write(1, "pa\n", 3);
}

// pb (push b): Take the first element at the top of a and put it at the top of b.
// Do nothing if a is empty
void	pb(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	write(1, "pb\n", 3);
}