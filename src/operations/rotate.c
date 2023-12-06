#include "../../include/push_swap.h"

// Shift up all elements of the stack by 1.
// The first element becomes the last one.
static void	rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	first = *stack;
	last = stack_get_last_node(*stack);
	// rotate the stack
	*stack = first->next;
	(*stack)->prev = NULL;
	last->next = first;
	first->prev = last;
	first->next = NULL;
}

// ra (rotate a): Shift up all elements of stack a by 1.
// The first element becomes the last one.
void	ra(t_stack **stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
}

// rb (rotate b): Shift up all elements of stack b by 1.
// The first element becomes the last one.
void	rb(t_stack **stack_b)
{
	rotate(stack_b);
	write(1, "rb\n", 3);
}

// rr : ra and rb at the same time.
void	rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
}