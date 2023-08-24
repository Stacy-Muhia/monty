#include "monty.h"

/**
 * check_num_args -function checks the number of arguments
 * arguments passed to the interpretor
 * @args
 * Return: nothing
 */
void check_num_args(char **args)
{
	if (args == NULL || args[0] == NULL)
		handle_errors(ERR_USAGE, NULL, 0, NULL);
}


