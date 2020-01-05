#include "monty.h"

/**
 * get_operation - Operators
 *
 * @op_func: Char pointer
 *
 * Return: Void
 */


void (*get_operation(char *op_func))(stack_t **stack, unsigned int line_number)
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
		{NULL, NULL}
	};

	for (count = 0; operation[count].opcode != NULL; count++)
	{
		if (strcmp(operation[count].opcode, op_func) == 0)
		{
			return (operation[count].f);
		}
	}
	exit(EXIT_FAILURE);
}
