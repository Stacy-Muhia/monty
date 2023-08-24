#include "monty.h"

/**
 * pop - functions to remove the top element of the stack
 * @begin: The beginning of the stack
 * @line_number: the counter
 */
void pop(stack_t **begin, unsigned int line_number)
{
	stack_t *temp;

	if (*begin == NULL)
		//missing line of code of error handling//
	temp = *begin;
	*begin = (*begin)->next;

	if (*begin)
		(*begin)->prev = NULL;

	free(temp);
}
