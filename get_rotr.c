#include "monty.h"

/**
 *  get_rotr - function that rotates top to bottom
 *  @stack: pointer to top of the tack
 *  @line_number: line number where opcode appears
 *  Return: nothing
 */
void get_rotr(stack_t **stack, unsigned int line_number)
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
		last->prev->next = NULL;
		last->prev = NULL;
		last->next = first;
		first->prev = last;
		*stack = last;
	}
}
