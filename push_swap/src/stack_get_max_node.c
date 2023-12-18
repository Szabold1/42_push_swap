/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_get_max_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:17:37 by bszabo            #+#    #+#             */
/*   Updated: 2023/12/18 10:20:35 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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
