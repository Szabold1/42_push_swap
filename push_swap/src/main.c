/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:59:26 by bszabo            #+#    #+#             */
/*   Updated: 2024/02/26 21:03:02 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// 1. put input into stack a
// 2. check if stack a is sorted
// 3. if not sorted, sort stack a
// 4. free stack a
int	main(int argc, char *argv[])
{
	t_stack	*stack_a;

	stack_a = handle_input(argc, argv);
	if (stack_is_sorted(stack_a) == false)
		sort_stack(&stack_a);
	free_stack(&stack_a);
	return (0);
}
