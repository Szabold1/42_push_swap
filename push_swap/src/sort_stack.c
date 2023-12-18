/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:06:13 by bszabo            #+#    #+#             */
/*   Updated: 2023/12/18 10:07:27 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// sort the three elements in the stack
static void	sort_three(t_stack **stack_a)
{
	t_stack	*biggest;

	biggest = stack_get_max_node(*stack_a);
	if ((*stack_a)->num == biggest->num)
		ra(stack_a, true);
	else if ((*stack_a)->next->num == biggest->num)
		rra(stack_a, true);
	if ((*stack_a)->num > (*stack_a)->next->num)
		sa(stack_a, true);
}

// get smallest number to the top of the stack
static void	rotate_final(t_stack **stack)
{
	t_stack	*min_node;

	if (stack == NULL)
		return ;
	set_node_indexes(*stack);
	min_node = stack_get_min_node(*stack);
	while (*stack != min_node)
	{
		if (min_node->above_middle)
			ra(stack, true);
		else
			rra(stack, true);
	}
}

// sort the numbers in the stack
// 1. if stack size is two, swap the numbers
// 2. if stack size is three, sort the three numbers
// 3. if stack size is more than three, sort the numbers
void	sort_stack(t_stack **stack_a)
{
	t_stack	*stack_b;
	int		stack_a_size;

	stack_b = NULL;
	stack_a_size = stack_size(*stack_a);
	if (stack_size(*stack_a) == 2)
		sa(stack_a, true);
	else if (stack_size(*stack_a) == 3)
		sort_three(stack_a);
	else
	{
		while (stack_a_size-- > 3)
			pb(stack_a, &stack_b, true);
		sort_three(stack_a);
		move_b_to_a(stack_a, &stack_b);
		rotate_final(stack_a);
	}
}
