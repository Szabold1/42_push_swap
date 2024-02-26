/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:50:50 by bszabo            #+#    #+#             */
/*   Updated: 2024/02/26 21:02:34 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*next;
	t_stack	*curr;

	if (!stack)
		return ;
	curr = *stack;
	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
	*stack = NULL;
}
