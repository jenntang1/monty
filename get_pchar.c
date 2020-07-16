#include "monty.h"

/**
 * get_pchar - function that prints the char at the top of the stack
 * @stack: pointer to head of the stack
 * @line_number: line number where opcode appears
 * Return:
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 */
void get_pchar(stack_t **stack, unsigned int line_number)
{
	/* If there's no stack, exit */
	if ((stack == NULL) || ((*stack) == NULL))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		fclose(file);
		get_free(*stack);
		exit(EXIT_FAILURE);
	}
	/* If character doesn't have an ASCII value, exit */
	if (!(isascii((*stack)->n)))
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		fclose(file);
		exit(EXIT_FAILURE);
	}
	/* If character has ASCII value, print it */
	printf("%c\n", (*stack)->n);
}
