#include "../include/push_swap.h"

// set target for each node in stack b
// target: the closest bigger number in stack a
// if there's no bigger num, smallest num is the target
static void	set_targets(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*curr_a;
	t_stack	*target_node;
	long	target_index;

	while (stack_b)
	{
		curr_a = stack_a;
		target_index = LONG_MAX;
		target_node = NULL;
		while (curr_a)
		{
			if (curr_a->num > stack_b->num && curr_a->index < target_index)
			{
				target_index = curr_a->index;
				target_node = curr_a;
			}
			curr_a = curr_a->next;
		}
		if (target_index == LONG_MAX)
			stack_b->target = stack_get_min_node(stack_a);
		else
			stack_b->target = target_node;
		stack_b = stack_b->next;
	}
}

// calculate price for each node in stack b
// price: number of steps before we can push the number back to stack a
static void    calc_prices(t_stack *stack_a, t_stack *stack_b)
{
	int		stack_a_len;
	int		stack_b_len;

	if (stack_a == NULL || stack_b == NULL)
		return ;
	stack_a_len = stack_size(stack_a);
	stack_b_len = stack_size(stack_b);
	while (stack_b)
	{
		if (stack_b->above_middle)
			stack_b->price = stack_b->index;
		else if (stack_b->above_middle == false)
			stack_b->price = stack_b_len - stack_b->index;
		if (stack_b->target->above_middle)
			stack_b->price += stack_b->target->index;
		else if (stack_b->target->above_middle == false)
			stack_b->price += stack_a_len - stack_b->target->index;
		stack_b = stack_b->next;
	}
}

// find and return the node with smallest price
static t_stack	*cheapest_node(t_stack *stack)
{
	long	cheapest_price;
	t_stack	*cheapest_node;
	t_stack	*curr;

	if (stack == NULL)
		return NULL;
	cheapest_price = LONG_MAX;
	cheapest_node = NULL;
	curr = stack;
	while (curr)
	{
		if (curr->price < cheapest_price)
		{
			cheapest_price = curr->price;
			cheapest_node = curr;
		}
		curr = curr->next;
	}
	return (cheapest_node);
}

// move back the elements from b to a in the right order
void	move_b_to_a(t_stack **stack_a, t_stack **stack_b)
{
	while (*stack_b)
	{
		set_node_indexes(*stack_a);
		set_node_indexes(*stack_b);
		set_targets(*stack_a, *stack_b);
		calc_prices(*stack_a, *stack_b);
		move_nodes(stack_a, stack_b, cheapest_node(*stack_b));
	}
}