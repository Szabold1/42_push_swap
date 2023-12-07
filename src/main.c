// include header file
#include "../include/push_swap.h"

// 1. put input into stack a
// 2. check if stack a is sorted
// 3. if not sorted, sort stack a
// 4. free stack a
int	main(int argc, char *argv[])
{
	t_stack *stack_a;

	stack_a = handle_input(argc, argv);
	if (stack_is_sorted(stack_a) == false)
		sort_stack(&stack_a);

	// testing the end result
	t_stack *temp = stack_a;
	while (temp)
	{
		printf(" %d ->", temp->num);
		temp = temp->next;
	}
	
	free_stack(stack_a);
	return (0);
}