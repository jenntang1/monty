#include "monty.h"

/**
 * get_operation - Operators
 *
 * @op_func: Char pointer
 *
 * Return: Void
 */


void (*get_operation(char *op_func, unsigned int line,stack_t **stack))(stack_t**, unsigned int)
{
	int count;

	instruction_t operation[] = {
		{"pall", get_pall},
		{"add", get_add},
		{"pint", get_pint},
		{"swap", get_swap},
		{"pop", get_pop},
		{"sub", get_sub},
		{"div", get_div},
		{"mul", get_mul},
		{"mod", get_mod},
		{"nop", get_nop},
		{"rotl", get_rotl},
		{"rotr", get_rotr},
		{"pchar", get_pchar},
		{NULL, NULL}
	};

	for (count = 0; operation[count].opcode != NULL; count++)
	{
		if (strcmp(operation[count].opcode, op_func) == 0)
		{
			return (operation[count].f);
		}
	}
	fprintf(stderr, "L%u: unknown instruction %s", line, op_func);
	fclose(file);
	get_free(*stack);
	exit(EXIT_FAILURE);
}
