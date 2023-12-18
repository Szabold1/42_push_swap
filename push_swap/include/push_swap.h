/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:37:50 by bszabo            #+#    #+#             */
/*   Updated: 2023/12/18 09:38:54 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// stddef for NULL
# include <stddef.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>

// Structure for node in stack
typedef struct s_stack
{
	int				num;
	int				index;
	int				price;
	bool			above_middle;
	struct s_stack	*target;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

// Error handling
void	handle_error(void);

// Free memory
void	free_stack(t_stack **stack);
void	free_str_arr(char **arr);

// Stack operations
void	pa(t_stack **stack_a, t_stack **stack_b, bool output);
void	pb(t_stack **stack_a, t_stack **stack_b, bool output);
void	rra(t_stack **stack_a, bool output);
void	rrb(t_stack **stack_b, bool output);
void	rrr(t_stack **stack_a, t_stack **stack_b, bool output);
void	ra(t_stack **stack_a, bool output);
void	rb(t_stack **stack_b, bool output);
void	rr(t_stack **stack_a, t_stack **stack_b, bool output);
void	sa(t_stack **stack, bool output);
void	sb(t_stack **stack, bool output);
void	ss(t_stack **stack_a, t_stack **stack_b, bool output);

// Other functions
bool	has_duplicate(t_stack *stack);
char	**ft_split(char const *str, char c);
t_stack	*handle_input(int argc, char *argv[]);
void	move_b_to_a(t_stack **stack_a, t_stack **stack_b);
void	move_nodes(t_stack **stack_a, t_stack **stack_b,
			t_stack *cheapest_node);
void	set_node_indexes(t_stack *stack);
void	sort_stack(t_stack **stack_a);
void	stack_add_back(t_stack **stack, t_stack *new_node);
t_stack	*stack_get_last_node(t_stack *stack);
t_stack	*stack_get_max_node(t_stack *stack);
t_stack	*stack_get_min_node(t_stack *stack);
bool	stack_is_sorted(t_stack *stack);
t_stack	*stack_new_node(int num);
int		stack_size(t_stack *stack);

#endif
