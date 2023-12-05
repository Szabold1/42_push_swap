#include "../include/push_swap.h"

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
	set_node_indexes(stack_a);
	set_node_indexes(stack_b);
}

void	rotate_rest(t_stack **stack_a, t_stack **stack_b,
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

void	move_nodes(t_stack **stack_a, t_stack **stack_b,
					t_stack *cheapest_node)
{
	if (cheapest_node->above_middle
		&& cheapest_node->target->above_middle)
		rotate_to_top(stack_a, stack_b, cheapest_node, false);
	else if (cheapest_node->above_middle == false
			&& cheapest_node->target->above_middle == false)
		reverse_to_top(stack_a, stack_b, cheapest_node, true);
	rotate_rest(stack_a, stack_b, cheapest_node);
	pa(stack_a, stack_b);
}