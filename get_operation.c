#include "monty.h"

/**
 * go - function that searches for valid opcode
 * @op_f: pointer to character in file
 * @l: line number of operation code in file
 * @stak: pointer to top of the stack
 * Return: nothing
 */
void (*go(char *op_f, unsigned int l, stack_t **stak))(stack_t**, unsigned int)
{
	/* Declare variable counter */
	int count;
	/* Create array with opcode for matching */
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
		{"pstr", get_pstr},
		{NULL, NULL}
	};
	/* Compare and match characters from file to opcodes in array */
	for (count = 0; operation[count].opcode != NULL; count++)
	{
		if (strcmp(operation[count].opcode, op_f) == 0)
		{
			return (operation[count].f);
		}
	}
	/* If opcode doesn't match, print error msg */
	fprintf(stderr, "L%u: unknown instruction %s\n", l, op_f);
	fclose(file);
	get_free(*stak);
	exit(EXIT_FAILURE);
}
