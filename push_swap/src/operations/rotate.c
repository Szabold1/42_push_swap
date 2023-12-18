/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:43:21 by bszabo            #+#    #+#             */
/*   Updated: 2023/12/18 09:43:51 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// Shift up all elements of the stack by one
// The first element becomes the last one.
static void	rotate(t_stack **stack)
{
	t_stack	*last;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	last = stack_get_last_node(*stack);
	last->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last->next->prev = last;
	last->next->next = NULL;
}

// ra (rotate a): Shift up all elements of stack a by one
// The first element becomes the last one.
void	ra(t_stack **stack_a, bool output)
{
	rotate(stack_a);
	if (output)
		write(1, "ra\n", 3);
}

// rb (rotate b): Shift up all elements of stack b by one
// The first element becomes the last one.
void	rb(t_stack **stack_b, bool output)
{
	rotate(stack_b);
	if (output)
		write(1, "rb\n", 3);
}

// rr : ra and rb at the same time.
void	rr(t_stack **stack_a, t_stack **stack_b, bool output)
{
	rotate(stack_a);
	rotate(stack_b);
	if (output)
		write(1, "rr\n", 3);
}
