/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_get_max_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:17:37 by bszabo            #+#    #+#             */
/*   Updated: 2024/02/26 21:03:37 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// get node with the biggest number in the stack
t_stack	*stack_get_max_node(t_stack *stack)
{
	t_stack	*max_node;
	int		max;

	if (stack == NULL)
		return (NULL);
	max = stack->num;
	max_node = stack;
	while (stack)
	{
		if (stack->num > max)
		{
			max = stack->num;
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}
