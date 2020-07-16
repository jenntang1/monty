#include "monty.h"

/**
 * get_pall - function that prints all elements on the stack
 * @stack: pointer to head of the stack
 * @line_number: line number where opcode appears
 * Return:
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 */
void get_pall(stack_t **stack, unsigned int line_number)
{
	/* Declare variable pointer */
	stack_t *current;

	/* Make argument void */
	(void)line_number;

	/**
	 * Point variable to the top of the stack
	 * Iterate through the stack
	 * Print each element as it goes
	 */
	current = *stack;
	while (current != NULL)
	{
		printf("%d", current->n);
		current = current->next;
		printf("\n");
	}
}
