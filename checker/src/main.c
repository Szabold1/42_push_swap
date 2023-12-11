#include "../include/checker.h"
 
static bool is_equal(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (false);
		i++;
	}
	return (true);
}

static void	handle_err(t_stack **stack_a, t_stack **stack_b, char *line)
{
	free_stack(stack_a);
	free_stack(stack_b);
	free(line);
	handle_error();
}

static void	handle_operations(t_stack **stack_a, t_stack **stack_b, char *line)
{
	if (is_equal(line, "pa\n"))
		pa(stack_a, stack_b, false);
	else if (is_equal(line, "pb\n"))
		pb(stack_a, stack_b, false);
	else if (is_equal(line, "rra\n"))
		rra(stack_a, false);
	else if (is_equal(line, "rrb\n"))
		rrb(stack_b, false);
	else if (is_equal(line, "rrr\n"))
		rrr(stack_a, stack_b, false);
	else if (is_equal(line, "ra\n"))
		ra(stack_a, false);
	else if (is_equal(line, "rb\n"))
		rb(stack_b, false);
	else if (is_equal(line, "rr\n"))
		rr(stack_a, stack_b, false);
	else if (is_equal(line, "sa\n"))
		sa(stack_a, false);
	else if (is_equal(line, "sb\n"))
		sb(stack_b, false);
	else if (is_equal(line, "ss\n"))
		ss(stack_a, stack_b, false);
	else
		handle_err(stack_a, stack_b, line);
}

int	main(int argc, char *argv[])
{
	int		stack_len;
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	*line;

	stack_a = handle_input(argc, argv);
	stack_b = NULL;
	stack_len = stack_size(stack_a);
	line = get_next_line(0);
	while (line)
	{
		handle_operations(&stack_a, &stack_b, line);
		free(line);
		line = get_next_line(0);
	}
	if (stack_is_sorted(stack_a) && stack_size(stack_a) == stack_len
		&& stack_size(stack_b) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free_stack(&stack_a);
}