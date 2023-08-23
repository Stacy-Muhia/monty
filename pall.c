#include "monty.h"

/**
 * pall - functions to prints all the values on the stack,
 * starting from the top of the stack.
 *@begin: The beginning of the stack
 *@line_number: the counter
 *
 */
void pall(stack_t **begin, unsigned int line_number)
{
	stack_t *x = NULL;
	(void) line_number;

	if (*begin)
	{
		x = *begin;
		while (x != NULL)
		{
			printf("%d\n", x->n);
			x = x->next;
		}
	}
}
