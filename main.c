#include "monty.h"

/**
 * main - the monty code interpreter
 * @argc: arguments count
 * @argv: argument vector
 * * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *content, *content_arg;
	FILE *file;	
	size_t size = 0, read_line = 0;

	stack_t *stack = NULL;
	
	unsigned int counter = 0;
	
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		content_arg = content;
		counter++;
		if (read_line > 0)
		{
			execute_opcodes(content, &stack, counter, file);
		}
		free(content);
	}
	free_stack(stack);
	fclose(file);
	return (0);
}

/**
 * free_stack -fress the linked list
 * Return: nothing
 */
void free_stack(stack_t *head)
{
	stack_t *ptr = NULL;

	if (head)
	{
		ptr = head;

		while (ptr)
		{
			head = head->next;
			free(ptr);
			ptr = head;
		}
	}
}
