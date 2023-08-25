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
	else if 
}(will fix this)
/**
 * invalid_args - functions to error handle invalid arguments
 * @line_number: the counte
 * @begin: Pointer to the head of the stack
 */
void invalid_args(stack_t **begin, unsigned int line_number)
{
	if (!is_integer(bus.arg))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*begin);
		exit(EXIT_FAILURE);
	}
}

/**
 * memory_error - functions to handle memory allocation errors
 * @new_node: Pointer to the newly allocated node
 * @@begin: The beginning of the stack
 */
void memory_error(stack_t *new_node, stack_t **begin)
{
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		fclose(bus.file);
		free(bus.content);
		free_stack(*begin);
		exit(EXIT_FAILURE);
	}
}

/**
 * file_opening - functions to handle file opening errors
 * @file_path: Path to the file
 */
void file_opening(const char *file_path)
{
	fprintf(stderr, "Error: Can't open file %s\n", file_path);
	exit(EXIT_FAILURE);
}

/**
 * error_exit - Funtions to handles error and exits program with cleanup.
 * @begin: The beginning of the stack.
 */
void handle_error_exit(stack_t **begin)
{
	fclose(bus.file);
	free(bus.content);
	free_stack(*begin);
	exit(EXIT_FAILURE);
}
