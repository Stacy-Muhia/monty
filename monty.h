#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

int main(int argc, char *argv[]);
void our_pall(stack_t **begin, unsigned int line_number);
void our_push(stack_t **begin, unsigned int line_number);
void check_num_args(char **args);
void our_pint(stack_t **begin, unsigned int line_number);
void our_pop(stack_t **begin, unsigned int line_number);
void free_stack(stack_t *head);
void (*execute_opcodes(char *str))(stack_t **, unsigned int);
void invalid_args(stack_t **begin, unsigned int line_number);
void memory_error(stack_t *new_node, stack_t **begin);
void file_opening(const char *file_path);
void error_exit(stack_t **begin);


#endif
