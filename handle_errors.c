#include "monty.h"

/**
 * handle_errors -handles the errors
 * @errno: errorcode
 * @opcode: opertaion code
 * @line: line with error
 * @args: array of string arguments
 */
void handle_error(int errno, char *opcode, unsigned int line, char **args)
{
	if ((errno >= 211 && errno <= 220)
		handle_pchar_errors(errno, line, args)
	else if (
