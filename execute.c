#include "monty.h"

/**
 *execute_opcodes -entry point
 *@counter: line_counter
 * @file: pointer to monty file
 * @content: line content
 * Return: nothing
 */
int (*execute_opcodes(char *str))(stack_t **, unsigned int)
{
	int i = 0;
	opcodes_t op_codes[] = {
		{"rotr", our_rotr},
		{"rotl", our_rotl},
		{"push", our_push},
		{"pall", our_pall},
		{"pop", our_pop},
		{"pint", our_pint},
		{"pstr", our_pstr},
		{"pchar", our_pchar},
		{"stack", our_stack},
		{"swap", our_swap},
		{"add", our_add},
		{"sub", our_sub},
		{"mul", our_mul},
		{"div", our_div}
		{"mod", our_mod},
		{"nop", our_nop},
		{"queue", our_queue},
		{NULL, NULL}
	};
	
	while (op_codes[i].opcode)
	{
		if (strcmp(str, op_codes[i].opcode) == 0)
			return (op_codes[i].f);
		i++;
	}
	return (NULL);
}
