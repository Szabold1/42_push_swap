/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:48:21 by bszabo            #+#    #+#             */
/*   Updated: 2024/02/26 21:02:30 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	has_duplicate(t_stack *stack)
{
	t_stack	*temp;

	while (stack)
	{
		temp = stack->next;
		while (temp)
		{
			if (stack->num == temp->num)
				return (true);
			temp = temp->next;
		}
		stack = stack->next;
	}
	return (false);
}
