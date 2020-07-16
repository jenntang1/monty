#include "monty.h"

/**
 * get_mul - function that multiples the top two elements of the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number where opcode appears
 * Return:
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 */
void get_mul(stack_t **stack, unsigned int line_number)
{
	/* Declare variable pointers for the top two elements */
	stack_t *first, *second;

	/* If there's no stack or a second element, exit */
	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		fclose(file);
		exit(EXIT_FAILURE);
	}
	/**
	 * Point variables to the top two elements
	 * Perform multiplication and add result to the second element
	 * Make second element the top of the stack
	 * Free first element
	 */
	else
	{
		first = *stack;
		second = first->next;
		second->n *= first->n;
		*stack = second;
		(*stack)->prev = NULL;
		free(first);
	}
}
