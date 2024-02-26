/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_node_indexes.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:05:38 by bszabo            #+#    #+#             */
/*   Updated: 2024/02/26 21:03:16 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
