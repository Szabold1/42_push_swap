#include "../../include/push_swap.h"

// push the first node from src to dest
static void	push(t_stack **src, t_stack **dest)
{
	t_stack	*node_to_push;

	if (*src == NULL)
		return ;
	node_to_push = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	if (*dest == NULL)
	{
		*dest = node_to_push;
		node_to_push->next = NULL;
	}
	else
	{
		node_to_push->next = *dest;
		node_to_push->next->prev = node_to_push;
		*dest = node_to_push;
	}
}

// pa (push a): Take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty.
void	pa(t_stack **stack_a, t_stack **stack_b, bool output)
{
	push(stack_b, stack_a);
	if (output)
		write(1, "pa\n", 3);
}

// pb (push b): Take the first element at the top of a and put it at the top of b.
// Do nothing if a is empty
void	pb(t_stack **stack_a, t_stack **stack_b, bool output)
{
	push(stack_a, stack_b);
	if (output)
		write(1, "pb\n", 3);
}