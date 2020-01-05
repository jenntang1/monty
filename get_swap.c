#include "monty.h"

/**
 * get_swap - function that swaps the top two elements on the stack
 * @stack: pointer to the top of the stack
 * @line_number: where the line number appears
 * Description: 3. swap
 * Return: see below
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 */
void get_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *first = *stack;
	stack_t *second = first->next;

	if ((*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else if (*stack)
	{
		*stack = second;
		first->next = second->next;
		second->next->prev = first;
		second->prev = NULL;
		second->next = first;
		first->prev = second;
	}
}
