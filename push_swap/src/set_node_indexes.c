/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_node_indexes.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:05:38 by bszabo            #+#    #+#             */
/*   Updated: 2023/12/18 10:05:52 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// set indexes and above_middle for nodes in stack
void	set_node_indexes(t_stack *stack)
{
	int	i;
	int	middle;

	if (stack == NULL)
		return ;
	i = 0;
	middle = stack_size(stack) / 2;
	while (stack)
	{
		if (i > middle)
			stack->above_middle = false;
		else if (i <= middle)
			stack->above_middle = true;
		stack->index = i++;
		stack = stack->next;
	}
}
