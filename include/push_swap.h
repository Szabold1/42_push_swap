#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>
# include "../libft/libft.h"

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

// Free functions
void	free_stack(t_stack *stack);

// Stack functions
void	set_node_indexes(t_stack *stack);
void	stack_add_back(t_stack **stack, t_stack *new_node);
t_stack	*stack_get_last_node(t_stack *stack);
t_stack	*stack_get_min_node(t_stack *stack);
int		stack_is_sorted(t_stack *stack);
t_stack	*stack_new_node(int num);
int		stack_size(t_stack *stack);

// Stack operations
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	sa(t_stack **stack);
void	sb(t_stack **stack);
void	ss(t_stack **stack_a, t_stack **stack_b);

// Other functions
int		check_dup(t_stack *stack);
t_stack	*handle_input(int argc, char *argv[]);
void	move_b_to_a(t_stack **stack_a, t_stack **stack_b);
void	sort_stack(t_stack **stack_a);

#endif