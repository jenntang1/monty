#include "monty.h"

/**
 * get_pint - function that prints the top element on the stack
 * @stack: pointer to head of the stack
 * @line_number: line number where opcode appears
 * Return:
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 */
void get_pint(stack_t **stack, unsigned int line_number)
{
	/* If there's no stack, exit */
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		fclose(file);
		get_free(*stack);
		exit(EXIT_FAILURE);
	}
	/* Prints the first element on stack */
	printf("%d\n", (*stack)->n);
}
