#include "../include/push_swap.h"

t_stack	*stack_new_node(int num)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (new_node == NULL)
		handle_error();
	new_node->num = num;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}