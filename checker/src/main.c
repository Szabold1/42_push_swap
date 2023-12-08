#include "../include/checker.h"

int	main(int argc, char *argv[])
{
	int		stack_len;
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	*line;

	stack_a = handle_input(argc, argv);
	stack_b = NULL;
	stack_len = stack_size(stack_a);
}