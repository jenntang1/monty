#include "monty.h"

/**
 * get_rotl - function that rotates the bottom to the top
 * @stack: pointer to the top of the stack
 * @line_number: line number where opcode appears
 * Return:
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 */
void get_rotl(stack_t **stack, unsigned int line_number)
{
	/* Declare variable pointers */
	stack_t *first, *last;
	/* Make argument void */
	(void)line_number;
	/* If there's no stack or a second element, exit */
	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		;
	}
	/**
	 * Iterate through stack, to point last pointer to the bottom
	 * Move pointers to swap elements
	 */
	else
	{
		first = last = *stack;
		while (last->next)
		{
			last = last->next;
		}
		*stack = first->next;
		last->next = first;
		first->prev = last;
		first->next = NULL;
		(*stack)->prev = NULL;
	}
}
