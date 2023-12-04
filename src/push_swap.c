// include header file
#include "../include/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack *stack_a;

	stack_a = handle_input(argc, argv);
	if (stack_is_sorted(stack_a) == 0)
		sort_stack(stack_a);
	free_stack(stack_a);
	return (0);
}