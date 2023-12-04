#include "../../include/push_swap.h"

void swap_first_two(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;
	// stack is empty or it has only 1 element
	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	first = *stack;
	second = first->next;
	// swap first and second
	first->next = second->next;
	second->next = first;
	first->prev = second;
	second->prev = NULL;
	*stack = second;
}

// sa (swap a): Swap the first 2 elements at the top of stack a.
// Do nothing if there is only one or no elements.
void	sa(t_stack **stack)
{
	swap_first_two(stack);
	write(1, "sa\n", 3);
}

// sb (swap b): Swap the first 2 elements at the top of stack b.
// Do nothing if there is only one or no elements.
void	sb(t_stack **stack)
{
	swap_first_two(stack);
	write(1, "sb\n", 3);
}

// ss : sa and sb at the same time.
void	ss(t_stack **stack_a, t_stack **stack_b)
{
	swap_first_two(stack_a);
	swap_first_two(stack_b);
	write(1, "ss\n", 3);
}