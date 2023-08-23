#include "monty.h"

/**
 * push - functions to push an element to the stack.
 * @begin: The beginning of the stack
 * @line_number: the counter
 */
void push(stack_t **begin, unsigned int line_number)
{
	stack_t *new_node = NULL;

	new_node->n = line_number;
	if (*begin)
	{
		new_node->next = *begin;
		new_node->prev = (*begin)->prev;
		(*begin)->prev = new_node;
		*begin = new_node;
		return;
	}

	new_node->next = *begin;
	new_node->prev = NULL;
	*begin = new_node;
}
