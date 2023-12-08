#include "../include/push_swap.h"

// create new node
t_stack	*stack_new_node(int num)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (new_node == NULL)
		handle_error();
	new_node->num = num;
	new_node->index = INT_MAX;
	new_node->price = INT_MAX;
	new_node->above_middle = false;
	new_node->target = NULL;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}