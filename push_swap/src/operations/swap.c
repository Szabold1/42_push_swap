/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:44:18 by bszabo            #+#    #+#             */
/*   Updated: 2023/12/18 09:47:30 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// swap the first two elements at the top of the stack
static void	swap_first_two(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;
	int		len;

	len = stack_size(*stack);
	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	first = *stack;
	second = first->next;
	if (len == 2)
	{
		first->next = NULL;
		first->prev = second;
		second->next = first;
		second->prev = NULL;
		*stack = second;
		return ;
	}
	first->next = second->next;
	second->next->prev = first;
	second->next = first;
	first->prev = second;
	second->prev = NULL;
	*stack = second;
}

// sa (swap a): Swap the first two elements at the top of stack a.
// Do nothing if there is only one or no elements.
void	sa(t_stack **stack_a, bool output)
{
	swap_first_two(stack_a);
	if (output)
		write(1, "sa\n", 3);
}

// sb (swap b): Swap the first two elements at the top of stack b.
// Do nothing if there is only one or no elements.
void	sb(t_stack **stack_b, bool output)
{
	swap_first_two(stack_b);
	if (output)
		write(1, "sb\n", 3);
}

// ss : sa and sb at the same time.
void	ss(t_stack **stack_a, t_stack **stack_b, bool output)
{
	swap_first_two(stack_a);
	swap_first_two(stack_b);
	if (output)
		write(1, "ss\n", 3);
}
