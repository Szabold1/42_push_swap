/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_is_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:26:05 by bszabo            #+#    #+#             */
/*   Updated: 2023/12/18 10:26:24 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// check if stack is sorted
bool	stack_is_sorted(t_stack *stack)
{
	t_stack	*curr;
	t_stack	*next;

	if (stack == NULL || stack->next == NULL)
		return (true);
	curr = stack;
	while (curr->next)
	{
		next = curr->next;
		if (curr->num > next->num)
			return (false);
		curr = next;
	}
	return (true);
}
