/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:41:54 by bszabo            #+#    #+#             */
/*   Updated: 2023/12/18 09:42:58 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// Shift down all elements of the stack by one
// The last element becomes the first one.
static void	reverse_rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (*stack == NULL || stack == NULL || (*stack)->next == NULL)
		return ;
	first = *stack;
	last = stack_get_last_node(*stack);
	last->prev->next = NULL;
	last->next = first;
	last->prev = NULL;
	*stack = last;
	first->prev = last;
}

// rra (reverse rotate a): Shift down all elements of stack a by one
// The last element becomes the first one.
void	rra(t_stack **stack_a, bool output)
{
	reverse_rotate(stack_a);
	if (output)
		write(1, "rra\n", 4);
}

// rrb (reverse rotate b): Shift down all elements of stack b by one
// The last element becomes the first one.
void	rrb(t_stack **stack_b, bool output)
{
	reverse_rotate(stack_b);
	if (output)
		write(1, "rrb\n", 4);
}

// rrr : rra and rrb at the same time.
void	rrr(t_stack **stack_a, t_stack **stack_b, bool output)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	if (output)
		write(1, "rrr\n", 4);
}
