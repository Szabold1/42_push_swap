#include "../include/push_swap.h"

// rotate both stacks until cheapest node is at top of stack b
// or its target is at top of stack a
static void	rotate_to_top(t_stack **stack_a, t_stack **stack_b,
					t_stack *cheapest_node, bool reverse)
{
	while (*stack_a != cheapest_node->target
			&& *stack_b != cheapest_node)
		{
			if (reverse)
				rrr(stack_a, stack_b);
			else
				rr(stack_a, stack_b);
		}
	set_node_indexes(*stack_a);
	set_node_indexes(*stack_b);
}

// finish rotation
// in the end cheapest node and its target will be at top of stack a and b
static void	rotate_rest(t_stack **stack_a, t_stack **stack_b,
					t_stack *cheapest_node)
{
	if (stack_a == NULL || stack_b == NULL)
		return ;
	while (*stack_a != cheapest_node->target)
	{
		if (cheapest_node->target->above_middle)
			ra(stack_a);
		else
			rra(stack_a);
	}
	while (*stack_b != cheapest_node)
	{
		if (cheapest_node->above_middle)
			rb(stack_b);
		else
			rrb(stack_b);
	}
}

// 1. move the cheapest node to top of stack b
// and move the target node to top of stack a
// 2. push cheapest node to top of stack a
void	move_nodes(t_stack **stack_a, t_stack **stack_b,
					t_stack *cheapest_node)
{
	if (cheapest_node->above_middle
		&& cheapest_node->target->above_middle)
		rotate_to_top(stack_a, stack_b, cheapest_node, false);
	else if (cheapest_node->above_middle == false
			&& cheapest_node->target->above_middle == false)
		rotate_to_top(stack_a, stack_b, cheapest_node, true);
	rotate_rest(stack_a, stack_b, cheapest_node);
	pa(stack_a, stack_b);
}