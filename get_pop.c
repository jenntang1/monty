#include "monty.h"

/**
 * get_pop - function that pops the top element of the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number where opcode appears
 * Return:
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 */
void get_pop(stack_t **stack, unsigned int line_number)
{
	/* Declare variable point */
	stack_t *first;

	/* If there's no stack, exit */
	if ((*stack == NULL) || (stack == NULL))
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(file);
		get_free(*stack);
		exit(EXIT_FAILURE);
	}
	/**
	 * Point variable to the top of the stack
	 * Move pointer to the second element on stack
	 * Free first element
	 */
	first = *stack;
	*stack = (*stack)->next;
	if (first->next)
	{
		first->next->prev = NULL;
	}
	free(first);
}
