#include "monty.h"

/**
 * get_swap - function that swaps the top two elements on the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number where opcode appears
 * Return:
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 */
void get_swap(stack_t **stack, unsigned int line_number)
{
	/* Declare variable pointers for the top two elements */
	stack_t *first, *second;

	/* If there's no stack or a second element, exit */
	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		fclose(file);
		get_free(*stack);
		exit(EXIT_FAILURE);
	}
	/* Redirect pointers without losing head */
	else if (*stack)
	{
		first = *stack;
		second = first->next;
		*stack = second;
		first->next = second->next;
		if (second->next != NULL)
		{
			second->next->prev = first;
		}
		second->prev = NULL;
		second->next = first;
		first->prev = second;
	}
}
