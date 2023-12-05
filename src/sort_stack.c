#include "../include/push_swap.h"

void    sort_three(t_stack **stack)
{
	if ((*stack)->num > (*stack)->next->num)
	{
		if ((*stack)->num < (*stack)->next->next->num)
			sa(stack);
		else if ((*stack)->next->num < (*stack)->next->next->num)
			ra(stack);
		else
		{
			sa(stack);
			rra(stack);
		}
	}
	else
	{
		if ((*stack)->num > (*stack)->next->next->num)
			rra(stack);
		else
		{
			sa(stack);
			ra(stack);
		}
	}
}

void	sort_stack(t_stack **stack_a)
{
	t_stack	*stack_b;
	int		stack_a_size;

	stack_b = NULL;
	stack_a_size = stack_size(*stack_a);
	if (stack_size(*stack_a) == 2)
		sa(stack_a);
	else if (stack_size(*stack_a) == 3)
		sort_three(stack_a);
	else
	{
		while (stack_a_size-- > 3) // move a to b until there are 3 elements in a
			pb(stack_a, &stack_b);
		sort_three(stack_a); // sort the elements in a
		move_b_to_a(stack_a, &stack_b); // move back the elements from b to a in the right order
	}
}