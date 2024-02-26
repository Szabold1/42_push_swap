/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_get_min_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:22:42 by bszabo            #+#    #+#             */
/*   Updated: 2024/02/26 21:03:42 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// get node with the smallest number in the stack
t_stack	*stack_get_min_node(t_stack *stack)
{
	t_stack	*min_node;
	int		min;

	if (stack == NULL)
		return (NULL);
	min = stack->num;
	min_node = stack;
	while (stack)
	{
		if (stack->num < min)
		{
			min = stack->num;
			min_node = stack;
		}
		stack = stack->next;
	}
	return (min_node);
}
