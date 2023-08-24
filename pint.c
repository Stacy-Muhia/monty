#include "monty.h"

/**
 * pint - functions to print the values on top of the stack,
 * followed by a new line.
 * @begin: The beginning of the stack
 * @line_number: the counter
 *
 */
void pint(stack_t **begin, unsigned int line_number)
{
	if (*begin == NULL)
		/*missing line of code of handling error*/

		printf("%d\n", (*begin)->n);
}
