#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stddef.h>
#include <unistd.h>
#include "../libft/libft.h"

typedef struct s_stack
{
	int					num;
	int					index;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack;

// Error handling
void	handle_error(void);

// Free functions
void	free_stack(t_stack *stack);

// Stack functions
void	stack_add_back(t_stack **stack, t_stack *new_node);
int		stack_is_sorted(t_stack *stack);
t_stack	*stack_new_node(int num);

// Other functions
int		check_dup(t_stack *stack);
t_stack	*handle_input(int argc, char *argv[]);

#endif